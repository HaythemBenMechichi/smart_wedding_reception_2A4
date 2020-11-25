#include "fleuriste.h"

fleuriste::fleuriste()
{

}
fleuriste::fleuriste(int idf,QString nom,int num,int prix)
{
    this->nom=nom;
    this->num=num;
    this->idf=idf;
    this->prix=prix;
}

bool fleuriste::ajouter()
{
     QSqlQuery query;

query.prepare("insert into fleuriste(nom,num,idf,prix)"
              "values(:nom,:num,:idf,:prix)");
query.bindValue(":nom",nom);
query.bindValue(":num",num);
query.bindValue(":idf",idf);
query.bindValue(":prix",prix);

return query.exec();

}
bool fleuriste::supprimer(QString nom)
{
    QSqlQuery query;
    query.prepare("Delete from fleuriste where nom= :nom");
    query.bindValue(":nom",nom);
    return query.exec();
}
QSqlQueryModel * fleuriste::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * where nom= :nom from fleuriste");
    model->setHeaderData(0,Qt::Vertical,QObject::tr("nom"));
    model->setHeaderData(1,Qt::Vertical,QObject::tr("num"));
    model->setHeaderData(2,Qt::Vertical,QObject::tr("prix"));


    return model;
}
