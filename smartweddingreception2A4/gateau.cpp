#include "gateau.h"
#include "QMessageBox"
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

bool gateau::update()
{
    QSqlQuery query;

    query.prepare("update  gateau set idG=:idG,nom=:nom,prix=:prix,ingrediant=:ingrediant where nom=:nom");

    query.bindValue(":idG",idG);
    query.bindValue(":nom",nom);
    query.bindValue(":prix",prix);
    query.bindValue(":ingrediant",ingrediant);

    return query.exec();
}
QSqlQueryModel * gateau::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from gateau");
    model->setHeaderData(0,Qt::Vertical,QObject::tr("nom"));
    model->setHeaderData(1,Qt::Vertical,QObject::tr("ingrediant"));
    model->setHeaderData(2,Qt::Vertical,QObject::tr("prix"));
    return model;
}

bool gateau::recherche(int idg,QString nom,int prix)
{
    QMessageBox msgBox;
    QMessageBox msgBox1;
    bool test=0;
    QSqlQuery query;
    int count=0;

    query.prepare("SELECT * FROM gateau WHERE nom= ? or idg= ?  or prix= ? ");

    query.addBindValue(nom);
    query.addBindValue(idg);
    query.addBindValue(prix);
    if(query.exec() )

    {
while (query.next())
   {
   count ++;
}
if(count==1)
   {
    msgBox.setText("gateau existe");
    msgBox.exec();
    test=1;
}

else if (count<1)
{
    msgBox1.setText("gateau n'existe pas");
        msgBox1.exec();
        test=0;
}

    }

    return test;
}

bool gateau::existance(int idg)
{
    QMessageBox msgBox;
    QMessageBox msgBox1;
    bool test=0;
    QSqlQuery query;
    int count=0;
    query.prepare("SELECT * FROM gateau WHERE idg= ?");
    query.addBindValue(idg);
    if(query.exec() )
    {
while (query.next())
   {
   count ++;
   }
if(count==1)
   {
    msgBox.setText("id deja existe");
    msgBox.exec();
    test=0;
   }

else if (count<1)
{
    msgBox1.setText("id disponible");
        msgBox1.exec();
        test=1;
}

    }

    return test;
}



