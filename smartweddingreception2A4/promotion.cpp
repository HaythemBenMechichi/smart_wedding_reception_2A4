#include "promotion.h"

promotion::promotion()
{

}
promotion::promotion(QString nom,int taux,int idp)
{
    this->nom=nom;
    this->idp=idp;
    this->taux=taux;
}

bool promotion::ajouter()
{
     QSqlQuery query;

query.prepare("insert into bague(nom,taux,idp)"
              "values(:nom,:taux,:idp)");
query.bindValue(":nom",nom);
query.bindValue(":taux",taux);
query.bindValue(":idp",idp);

return query.exec();

}
bool promotion::supprimer(QString nom)
{
    QSqlQuery query;
    query.prepare("Delete from promtion where nom= :nom");
    query.bindValue(":nom",nom);
    return query.exec();
}
QSqlQueryModel * promotion::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * where nom= :nom from promtion");
    model->setHeaderData(0,Qt::Vertical,QObject::tr("nom"));
    model->setHeaderData(1,Qt::Vertical,QObject::tr("taux"));


    return model;
}
