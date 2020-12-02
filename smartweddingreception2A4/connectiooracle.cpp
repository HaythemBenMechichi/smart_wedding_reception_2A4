#include "connectiooracle.h"




ConnectioOracle::ConnectioOracle()
{

}

bool ConnectioOracle::createconnect()
{
bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("smartweddingDB");//inserer le nom de la source de données ODBC
db.setUserName("youssef");//inserer nom de l'utilisateur
db.setPassword("1234");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}
