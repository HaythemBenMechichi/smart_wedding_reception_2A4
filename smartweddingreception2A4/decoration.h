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
    int idD;
    QString nomdecorateur;
    QString style;
    int num;
    int prix;
public:
    decoration();
    decoration(int idd,QString nom,QString style,int num,int prix);
    //getters
      QString getNom(){return nomdecorateur;}
      QString getStyle(){return style;}
      int getIdd(){return idD;}
      int getPrix(){return prix;}
      int getNum(){return num;}

    //setters
      void setNom(QString nomdecorateur){this->nomdecorateur=nomdecorateur;}
      void setIdd(int idD){this->idD=idD;}
      void setPrix(int prix){this->prix=prix;}
      void setStyle(QString style){this->style=style;}
      void setNum(int num){this->num=num;}
      //crud
      bool ajouter();
      bool supprimer(QString nom);
      QSqlQueryModel * afficher();
      bool update();
      bool recherche(int idD,QString nomdecorateur,int prix);

};

#endif // DECORATION_H
