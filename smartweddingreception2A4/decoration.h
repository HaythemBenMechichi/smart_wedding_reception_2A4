#ifndef DECORATION_H
#define DECORATION_H
#include <string>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>
using namespace std;
class decoration
{
private:
    int idd;
    QString nom;
    QString style;
    int num;
    int prix;
public:
    decoration();
    decoration(int idd,QString nom,QString style,int num,int prix);
    //getters
      QString getNom(){return nom;}
      QString getStyle(){return style;}
      int getIdd(){return idd;}
      int getPrix(){return prix;}
      int getNum(){return num;}

    //setters
      void setNom(QString nom){this->nom=nom;}
      void setIdd(int idd){this->idd=idd;}
      void setPrix(int prix){this->prix=prix;}
      void setStyle(QString style){this->style=style;}
      void setNum(int num){this->num=num;}
      //crud
      bool ajouter();
      bool supprimer(QString nom);
      QSqlQueryModel * afficher();
      bool update();
};

#endif // DECORATION_H
