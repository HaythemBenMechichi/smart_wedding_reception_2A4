#include "fleuriste.h"
#include "QMessageBox"

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

bool fleuriste::update()
{
    QSqlQuery query;
    query.prepare("update  fleuriste set idf=:idf,nom=:nom,prix=:prix,num=:num where nom=:nom");
    query.bindValue(":idf",idf);
    query.bindValue(":nom",nom);
    query.bindValue(":prix",prix);
    query.bindValue(":num",num);
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
    model->setQuery("select *  from fleuriste");
    model->setHeaderData(0,Qt::Vertical,QObject::tr("nom"));
    model->setHeaderData(1,Qt::Vertical,QObject::tr("num"));
    model->setHeaderData(2,Qt::Vertical,QObject::tr("prix"));
    return model;
}


bool fleuriste::recherche(QString nom,int prix,int num)
{
    QMessageBox msgBox;
    QMessageBox msgBox1;
bool test=0;
    QSqlQuery query;
    int count=0;


    query.prepare("SELECT * FROM fleuriste WHERE nom= ? or prix= ? or num= ?");

    query.addBindValue(nom);
    query.addBindValue(prix);
    query.addBindValue(num);
    if(query.exec() )

    {
while (query.next())
   {
   count ++;
}
if(count==1)
   {
    msgBox.setText("fleuriste existe");
    msgBox.exec();
    test=1;
}

else if (count<1)
{
    msgBox1.setText("fleuriste n'existe pas");
        msgBox1.exec();
        test=0;
}

    }

    return test;


}

