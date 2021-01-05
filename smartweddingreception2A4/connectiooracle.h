#ifndef CONNECTIOORACLE_H
#define CONNECTIOORACLE_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class ConnectioOracle
{
public:
    ConnectioOracle();
    bool createconnect();

};

#endif // CONNECTIOORACLE_H
