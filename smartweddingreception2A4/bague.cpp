#include "bague.h"
///bague
bague::bague()
{

}

bague::bague(int idb,QString nom,QString commentaire,int prix)
{
    this->nom=nom;
    this->commentaire=commentaire;
    this->idb=idb;
    this->prix=prix;
}

bool bague::ajouter()
{
     QSqlQuery query;

query.prepare("insert into bague(nom,commentaire,idb,prix)"
              "values(:nom,:commentaire,:idb,:prix)");
query.bindValue(":nom",nom);
query.bindValue(":commentaire",commentaire);
query.bindValue(":idb",idb);
query.bindValue(":prix",prix);

return query.exec();

}
bool bague::supprimer(QString nom)
{
    QSqlQuery query;
    query.prepare("Delete from bague where nom= :nom");
    query.bindValue(":nom",nom);
    return query.exec();
}
QSqlQueryModel * bague::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * where nom= :nom from bague");
    model->setHeaderData(0,Qt::Vertical,QObject::tr("nom"));
    model->setHeaderData(1,Qt::Vertical,QObject::tr("commentaire"));
    model->setHeaderData(2,Qt::Vertical,QObject::tr("prix"));


    return model;
}
/*bool bague::update()
{
    QSqlQuery query;

    query.prepare("insert into bague where nom= :nom nom,commentaire,prix)"
                  "values(:nom,:commentaire,:prix)");
    query.bindValue(":nom",nom);
    query.bindValue(":commentaire",commentaire);
    query.bindValue(":prix",prix);


    return query.exec();

}*/
