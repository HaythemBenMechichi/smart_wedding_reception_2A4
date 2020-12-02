#ifndef GATEAU_H
#define GATEAU_H
#include <string>
#include <QSqlQuery>
#include <QSqlQueryModel>
using namespace std;

class gateau
{

private:
 int idG;
 QString nom;
 int prix;
 QString ingrediant;
public:
    gateau();
    gateau(int idG,QString nom,int prix,QString ingrediant);
    //getters
 int getIdG(){return idG;}
 QString getNom(){return nom;}
 int getPrix(){return prix;}
 QString getIngrediant(){return ingrediant;}
 //setters
 void setIdG(int idG){this->idG=idG;}
 void setNom(QString nom){this->nom=nom;}
 void setIngrediant(QString ingrediant){this->ingrediant=ingrediant;}
 void setPrix(int prix){this->prix=prix;}
 // crud
   bool ajouter();
   bool supprimer(QString nom);
   QSqlQueryModel * afficher();
   bool  recherche(int idg,QString nom,int prix);
   bool existance(int idg);



   bool update();
};

#endif // GATEAU_H
