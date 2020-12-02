#ifndef MUSIQUE_H
#define MUSIQUE_H
#include <string>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>
using namespace std;
class musique
{
private:
    int idm;
    QString type;
    QString email;
    int prix;

public:
    musique();
     musique(int idm,QString type,QString email,int prix);
     //getters
       QString getEmail(){return email;}
       QString getType(){return type;}
       int getIdm(){return idm;}
       int getPrix(){return prix;}


     //setters
       void setEmail(QString email){this->email=email;}
       void setIdm(int idm){this->idm=idm;}
       void setPrix(int prix){this->prix=prix;}
       void setType(QString type){this->type=type;}
       
       //crud
       bool ajouter();
       bool supprimer(QString type);
       QSqlQueryModel * afficher();
       bool update();
};

#endif // MUSIQUE_H
