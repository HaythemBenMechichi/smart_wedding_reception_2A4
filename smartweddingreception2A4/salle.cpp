#include "salle.h"
#include "QMessageBox"

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
    model->setQuery("select * from salle");
    model->setHeaderData(0,Qt::Vertical,QObject::tr("nom"));
    model->setHeaderData(1,Qt::Vertical,QObject::tr("emplacement"));
    model->setHeaderData(1,Qt::Vertical,QObject::tr("dispo"));
    model->setHeaderData(1,Qt::Vertical,QObject::tr("capacite"));
    model->setHeaderData(2,Qt::Vertical,QObject::tr("prix"));
    return model;
}

bool salle::update()
{
    QSqlQuery query;

    query.prepare("update  salle set idS=:idS,nom=:nom,prix=:prix,capacite=:capacite,emplacement=:emplacement where nom=:nom");
    query.bindValue(":idS",idS);
    query.bindValue(":nom",nom);
    query.bindValue(":prix",prix);
    query.bindValue(":capacite",capacite);
    query.bindValue(":emplacement",emplacement);
    return query.exec();
}


bool salle::recherche(int idS,QString nom,int prix)
{
    QMessageBox msgBox;
    QMessageBox msgBox1;
    bool test=0;
    QSqlQuery query;
    int count=0;

    query.prepare("SELECT * FROM salle WHERE nom= ? or idS= ?  or prix= ? ");

    query.addBindValue(nom);
    query.addBindValue(idS);
    query.addBindValue(prix);
    if(query.exec() )

    {
while (query.next())
   {
   count ++;
}
if(count==1)
   {
    msgBox.setText("salle existe");
    msgBox.exec();
    test=1;
}

else if (count<1)
{
    msgBox1.setText("salle n'existe pas");
        msgBox1.exec();
        test=0;
}

    }

    return test;
}
