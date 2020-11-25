#include "robe.h"

robe::robe()
{

}
robe:: robe(int idr,QString nom,int prix,QString commentaire)
{
    this->nom=nom;
    this->commentaire=commentaire;
    this->idr=idr;
    this->prix=prix;
}

bool robe::ajouter()
{
     QSqlQuery query;

query.prepare("insert into bague(nom,commentaire,idr,prix)"
              "values(:nom,:commentaire,:idr,:prix)");
query.bindValue(":nom",nom);
query.bindValue(":commentaire",commentaire);
query.bindValue(":idr",idr);
query.bindValue(":prix",prix);

return query.exec();

}
bool robe::supprimer(QString nom)
{
    QSqlQuery query;
    query.prepare("Delete from robe where nom= :nom");
    query.bindValue(":nom",nom);
    return query.exec();
}
QSqlQueryModel * robe::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * where nom= :nom from robe");
    model->setHeaderData(0,Qt::Vertical,QObject::tr("nom"));
    model->setHeaderData(1,Qt::Vertical,QObject::tr("commentaire"));
    model->setHeaderData(2,Qt::Vertical,QObject::tr("prix"));


    return model;
}
