#include "client.h"

client::client()
{

}

client::client(QString nom,QString prenom,int age,int cin,int numero,QString mail,QDate dat,QString region)
{
    this->nom=nom;
    this->prenom=prenom;
    this->age=age;
    this->cin=cin;
    this->region=region;
    this->numero=numero;
    this->mail=mail;
    this->dat=dat;
}

bool client::ajouter()
{
     QSqlQuery query;

query.prepare("insert into client(nom,prenom,age,cin,region,numero,mail,dat)"
              "values(:nom,:prenom,:age,:cin,:region,:numero,:mail,:dat)");
query.bindValue(":nom",nom);
query.bindValue(":prenom",prenom);
query.bindValue(":age",age);
query.bindValue(":cin",cin);
query.bindValue(":region",region);
query.bindValue(":numero",numero);
query.bindValue(":mail",mail);
query.bindValue(":dat",dat);

return query.exec();

}
bool client::supprimer(int cin)
{
    QSqlQuery query;
    query.prepare("Delete from client where cin= :cin");
    query.bindValue(":cin",cin);
    return query.exec();
}
QSqlQueryModel * client::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * where cin= :cin from client");
    model->setHeaderData(0,Qt::Vertical,QObject::tr("nom"));
    model->setHeaderData(1,Qt::Vertical,QObject::tr("prenom"));
    model->setHeaderData(2,Qt::Vertical,QObject::tr("age"));
    model->setHeaderData(3,Qt::Vertical,QObject::tr("region"));
    model->setHeaderData(4,Qt::Vertical,QObject::tr("numero"));
    model->setHeaderData(5,Qt::Vertical,QObject::tr("mail"));
    model->setHeaderData(5,Qt::Vertical,QObject::tr("dat"));

    return model;
}
bool client::update()
{
    QSqlQuery query;

    query.prepare("insert into client where cin= :cin nom,prenom,age,region,numero,mail,dat)"
                  "values(:nom,:prenom,:age,:region,:numero,:mail,:dat)");
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":age",age);
    query.bindValue(":cin",cin);
    query.bindValue(":region",region);
    query.bindValue(":numero",numero);
    query.bindValue(":mail",mail);
    query.bindValue(":dat",dat);

    return query.exec();

}
