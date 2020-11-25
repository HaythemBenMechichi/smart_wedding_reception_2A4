#ifndef FLEURISTE_H
#define FLEURISTE_H
#include <string>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>
using namespace std;
class fleuriste
{
private:
    int idf;
    QString nom;
    int num;
    int prix;

public:
    fleuriste();
    fleuriste(int idf,QString nom,int num,int prix);
    //getters
      QString getNom(){return nom;}
      int getIdf(){return idf;}
      int getPrix(){return prix;}
      int getNum(){return num;}

    //setters
      void setNom(QString nom){this->nom=nom;}
      void setIdd(int idf){this->idf=idf;}
      void setPrix(int prix){this->prix=prix;}
      void setNum(int num){this->num=num;}
      //crud
      bool ajouter();
      bool supprimer(QString nom);
      QSqlQueryModel * afficher();
      bool update();
};

#endif // FLEURISTE_H
