#include "gateau.h"

gateau::gateau()
{

}

gateau::gateau(int idG,QString nom,int prix,QString ingrediant)
{
    this->idG=idG;
    this->nom=nom;
    this->prix=prix;
    this->ingrediant=ingrediant;

}
bool gateau::ajouter()
{
    QSqlQuery query;

query.prepare("insert into gateau(idG,nom,prix,ingrediant)"
             "values(:idG,:nom,:prix,:ingrediant)");
query.bindValue(":idG",idG);
query.bindValue(":nom",nom);
query.bindValue(":prix",prix);
query.bindValue(":ingrediant",ingrediant);
return query.exec();

}

bool gateau::supprimer(QString nom)
{
    QSqlQuery query;
    query.prepare("Delete from gateau where nom= :nom");
    query.bindValue(":nom",nom);
    return query.exec();
}
QSqlQueryModel * gateau::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * where nom= :nom from gateau");
    model->setHeaderData(0,Qt::Vertical,QObject::tr("nom"));
    model->setHeaderData(1,Qt::Vertical,QObject::tr("ingrediant"));
    model->setHeaderData(2,Qt::Vertical,QObject::tr("prix"));


    return model;
}
