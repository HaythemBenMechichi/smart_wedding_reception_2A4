#ifndef PROMOTION_H
#define PROMOTION_H
#include <string>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>
using namespace std;
class promotion
{
private:
    QString nom;
    int taux;
    int idp;

public:
    promotion();
    promotion(QString nom,int taux,int idp);
    //getters
      QString getNom(){return nom;}
      int getIdp(){return idp;}
      int getTaux(){return taux;}
     //setters
      void setNom(QString nom){this->nom=nom;}
      void setIdb(int idp){this->idp=idp;}
      void setTaux(int taux){this->taux=taux;}
     //crud
      bool ajouter();
      bool supprimer(QString nom);
      QSqlQueryModel * afficher();
      bool update();
};

#endif // PROMOTION_H
