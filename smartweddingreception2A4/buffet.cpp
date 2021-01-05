#include "buffet.h"

buffet::buffet()
{

}
buffet::buffet(int idb,QString nom,int prix,QString type_nouriture,QString type_boisson)
{
    this->nom=nom;
    this->type_nouriture=type_nouriture;
    this->type_boisson=type_boisson;
    this->idb=idb;
    this->prix=prix;
}

bool buffet::ajouter()
{
     QSqlQuery query;

query.prepare("insert into buffet(nom,type_nouriture,type_boisson,idb,prix)"
              "values(:nom,:type_nouriture,:type_boisson,:idb,:prix)");
query.bindValue(":nom",nom);
query.bindValue(":type_nouriture",type_nouriture);
query.bindValue(":type_boisson",type_boisson);
query.bindValue(":idb",idb);
query.bindValue(":prix",prix);

return query.exec();

}
bool buffet::supprimer(QString nom)
{
    QSqlQuery query;
    query.prepare("Delete from buffet where nom= :nom");
    query.bindValue(":nom",nom);
    return query.exec();
}
QSqlQueryModel * buffet::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * where nom= :nom from buffet");
    model->setHeaderData(0,Qt::Vertical,QObject::tr("nom"));
    model->setHeaderData(1,Qt::Vertical,QObject::tr("type_nouriture"));
    model->setHeaderData(1,Qt::Vertical,QObject::tr("type_boisson"));
    model->setHeaderData(2,Qt::Vertical,QObject::tr("prix"));


    return model;
}
