#include "decoration.h"

decoration::decoration()
{

}
decoration::decoration(int idd,QString nom,QString style,int num,int prix)
{
    this->nom=nom;
    this->style=style;
    this->num=num;
    this->idd=idd;
    this->prix=prix;
}

bool decoration::ajouter()
{
     QSqlQuery query;

query.prepare("insert into decoration(nom,style,num,idd,prix)"
              "values(:nom,:style,:num,:idd,:prix)");
query.bindValue(":nom",nom);
query.bindValue(":style",style);
query.bindValue(":num",num);
query.bindValue(":idd",idd);
query.bindValue(":prix",prix);

return query.exec();

}
bool decoration::supprimer(QString nom)
{
    QSqlQuery query;
    query.prepare("Delete from decoration where nom= :nom");
    query.bindValue(":nom",nom);
    return query.exec();
}
QSqlQueryModel * decoration::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * where nom= :nom from decoration");
    model->setHeaderData(0,Qt::Vertical,QObject::tr("nom"));
    model->setHeaderData(1,Qt::Vertical,QObject::tr("style"));
    model->setHeaderData(1,Qt::Vertical,QObject::tr("num"));
    model->setHeaderData(2,Qt::Vertical,QObject::tr("prix"));


    return model;
}
