#ifndef ROBE_H
#define ROBE_H
#include <string>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>
using namespace std;
class robe
{
private:
    int idr;
    QString nom;
    int prix;
    QString commentaire;
public:
    robe();
     robe(int idr,QString nom,int prix,QString commentaire);
     //getters
       QString getNom(){return nom;}
       QString getCommentaire(){return commentaire;}
       int getIdr(){return idr;}
       int getPrix(){return prix;}

     //setters
       void setNom(QString nom){this->nom=nom;}
       void setIdr(int idr){this->idr=idr;}
       void setPrix(int prix){this->prix=prix;}
       void setCommentaire(QString commentaire){this->commentaire=commentaire;}
       //crud
       bool ajouter();
       bool supprimer(QString cin);
       QSqlQueryModel * afficher();
       bool update();
};

#endif // ROBE_H
