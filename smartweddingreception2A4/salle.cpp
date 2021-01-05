#include "salle.h"

salle::salle()
{

}
salle::salle( int idS,QString  emplacement,QString nom,int dispo,int prix,int capacite)
{
    this->idS=idS;
    this->emplacement=emplacement;
    this->nom=nom;
    this->dispo=dispo;
    this->prix=prix;
    this->capacite=capacite;
}

bool salle::ajouter()
{
     QSqlQuery query;

query.prepare("insert into salle(idS,emplacement,nom,dispo,prix,capacite)"
              "values(:idS,:emplacement,:nom,:dispo,:prix,:capacite)");

query.bindValue(":idS",idS);
query.bindValue(":emplacement",emplacement);
query.bindValue(":nom",nom);
query.bindValue(":dispo",dispo);
query.bindValue(":prix",prix);
query.bindValue(":capacite",capacite);


return query.exec();

}
bool salle::supprimer(QString nom)
{
    QSqlQuery query;
    query.prepare("Delete from salle where nom= :nom");
    query.bindValue(":nom",nom);
    return query.exec();
}
QSqlQueryModel * salle::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * where nom= :nom from salle");
    model->setHeaderData(0,Qt::Vertical,QObject::tr("nom"));
    model->setHeaderData(1,Qt::Vertical,QObject::tr("emplacement"));
    model->setHeaderData(1,Qt::Vertical,QObject::tr("dispo"));
    model->setHeaderData(1,Qt::Vertical,QObject::tr("capacite"));
    model->setHeaderData(2,Qt::Vertical,QObject::tr("prix"));


    return model;
}
