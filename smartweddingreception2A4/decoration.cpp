#include "decoration.h"
#include "QMessageBox"

decoration::decoration()
{

}
decoration::decoration(int idD,QString nomdecorateur,QString style,int num,int prix)
{
    this->nomdecorateur=nomdecorateur;
    this->style=style;
    this->num=num;
    this->idD=idD;
    this->prix=prix;
}

bool decoration::ajouter()
{
     QSqlQuery query;

query.prepare("insert into decoration(nomdecorateur,style,num,idD,prix)"
              "values(:nomdecorateur,:style,:num,:idD,:prix)");
query.bindValue(":nomdecorateur",nomdecorateur);
query.bindValue(":style",style);
query.bindValue(":num",num);
query.bindValue(":idD",idD);
query.bindValue(":prix",prix);

return query.exec();

}
bool decoration::supprimer(QString nomdecorateur)
{
    QSqlQuery query;
    query.prepare("Delete from decoration where nomdecorateur= :nomdecorateur");
    query.bindValue(":nomdecorateur",nomdecorateur);
    return query.exec();
}

bool decoration::update()
{
    QSqlQuery query;

    query.prepare("update  decoration set idD=:idD,nomdecorateur=:nomdecorateur,prix=:prix,style=:style,num=:num where nomdecorateur=:nomdecorateur");
    query.bindValue(":idD",idD);
    query.bindValue(":nomdecorateur",nomdecorateur);
    query.bindValue(":prix",prix);
    query.bindValue(":style",style);
    query.bindValue(":num",num);
    return query.exec();
}


QSqlQueryModel * decoration::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from decoration");
    model->setHeaderData(0,Qt::Vertical,QObject::tr("nomdecorateur"));
    model->setHeaderData(1,Qt::Vertical,QObject::tr("style"));
    model->setHeaderData(1,Qt::Vertical,QObject::tr("num"));
    model->setHeaderData(2,Qt::Vertical,QObject::tr("prix"));


    return model;
}

bool decoration::recherche(int idD,QString nomdecorateur,int prix)
{
    QMessageBox msgBox;
    QMessageBox msgBox1;
    bool test=0;
    QSqlQuery query;
    int count=0;

    query.prepare("SELECT * FROM decoration WHERE nomdecorateur= ? or idD= ?  or prix= ? ");

    query.addBindValue(nomdecorateur);
    query.addBindValue(idD);
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

