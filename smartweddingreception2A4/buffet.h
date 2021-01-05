#ifndef BUFFET_H
#define BUFFET_H
#include <string>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>
using namespace std;

class buffet
{
private:
    int idb;
    QString nom;
    int prix;
    QString type_nouriture;
    QString type_boisson;
public:
    buffet();
    buffet(int idb,QString nom,int prix,QString type_nouriture,QString type_boisson);
    //getters
      QString getNom(){return nom;}
      QString getTypenouriture(){return type_nouriture;}
      QString getTypeboisson(){return type_boisson;}
      int getIdb(){return idb;}
      int getPrix(){return prix;}

    //setters
      void setNom(QString nom){this->nom=nom;}
      void setIdb(int idb){this->idb=idb;}
      void setPrix(int prix){this->prix=prix;}
      void setCommentaire(QString type_boisson){this->type_boisson=type_boisson;}
      //crud
      bool ajouter();
      bool supprimer(QString nom);
      QSqlQueryModel * afficher();
      bool update();
};

#endif // BUFFET_H
