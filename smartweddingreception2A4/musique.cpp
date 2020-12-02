#include "musique.h"

musique::musique()
{

}
musique::musique(int idm,QString type,QString email,int prix)
{
    this->idm=idm;
    this->type=type;
    this->prix=prix;
    this->email=email;

}
bool musique::ajouter()
{
    QSqlQuery query;

query.prepare("insert into musique(idm,nom,prix,email)"
             "values(:idm,:nom,:prix,:email)");
query.bindValue(":idm",idm);
query.bindValue(":type",type);
query.bindValue(":prix",prix);
query.bindValue(":email",email);
return query.exec();

}

bool musique::supprimer(QString type)
{
    QSqlQuery query;
    query.prepare("Delete from musique where type= :type");
    query.bindValue(":type",type);
    return query.exec();
}
QSqlQueryModel * musique::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * where type= :type from musique");
    model->setHeaderData(0,Qt::Vertical,QObject::tr("type"));
    model->setHeaderData(1,Qt::Vertical,QObject::tr("email"));
    model->setHeaderData(2,Qt::Vertical,QObject::tr("prix"));


    return model;
}
