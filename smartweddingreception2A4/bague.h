#ifndef BAGUE_H
#define BAGUE_H
#include <string>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>
using namespace std;
class bague
{
private:
    int idb;
    QString nom;
    QString commentaire;
    int prix;

public:
    bague();
    bague(int idb,QString nom,QString commentaire,int prix);
    //getters
      QString getNom(){return nom;}
      QString getCommentaire(){return commentaire;}
      int getIdb(){return idb;}
      int getPrix(){return prix;}

    //setters
      void setNom(QString nom){this->nom=nom;}
      void setIdb(int idb){this->idb=idb;}
      void setPrix(int prix){this->prix=prix;}
      void setCommentaire(QString commentaire){this->commentaire=commentaire;}
      //crud
      bool ajouter();
      bool supprimer(QString nom);
      QSqlQueryModel * afficher();
      bool update();
};

#endif // BAGUE_H
