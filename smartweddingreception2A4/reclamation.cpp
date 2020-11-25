#include "reclamation.h"

reclamation::reclamation()
{

}
reclamation::reclamation(QDate dat,QString commentaire,int cin,int rate)
{
    this->dat=dat;
    this->commentaire=commentaire;
    this->cin=cin;
    this->rate=rate;
}
bool reclamation::ajouter()
{
    QSqlQuery query;

query.prepare("insert into RECLAMATION(dat,commentaire,cin,rate)"
             "values(:dat,:commentaire,:cin,:rate)");
query.bindValue(":dat",dat);
query.bindValue(":commentaire",commentaire);
query.bindValue(":cin",cin);
query.bindValue(":rate",rate);
return query.exec();
}
bool reclamation::supprimer(int cin)
{
    QSqlQuery query;
   QString res=QString::number(cin);

   query.prepare("Delete from RECLAMATION where CIN= :cin");
   query.bindValue(":cin",res);
   return query.exec();
}
QSqlQueryModel * reclamation::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from RECLAMATION");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("date"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("commentaire"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("cin"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("rate"));

    return model;
}
bool reclamation::update()
{
    QSqlQuery query;

    query.prepare("insert into RECLAMATION  (dat,commentaire,rate)"
         "values(:dat,:commentaire,:rate)");
    query.bindValue(":dat",dat);
    query.bindValue(":commentaire",commentaire);
    query.bindValue(":rate",rate);

    return query.exec();

}
/*bool reclamation::recherche(int cin)
{
    QSqlQuery query;
   QString res=QString::number(cin);

   query.prepare("select * from RECLAMATION where CIN= :cin");
   query.bindValue(":cin",res);
   return query.exec();
}*/
