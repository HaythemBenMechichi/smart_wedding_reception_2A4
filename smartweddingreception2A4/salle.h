#ifndef SALLE_H
#define SALLE_H
#include <string>
#include <QSqlQuery>
#include <QSqlQueryModel>
class salle
{

private:
 int idS;
QString  emplacement;
QString nom;
int dispo;
int prix;
int capacite;
public:
//constructeur
salle();
    salle( int idS,QString  emplacement,QString nom,int dispo,int prix,int capacite);
//getters
    int getIdS(){return idS;}
    QString getEmplacement(){return nom;}
    QString getNom(){return nom;}
    int getDispo(){return dispo;}
    int getPrix(){return prix;}
    int getCapacite(){return capacite;}
//setters
    void setIdS(int idS){this->idS=idS;}
    void setEmplacement(QString emplacement){this->emplacement=emplacement;}
    void setNom(QString nom){this->nom=nom;}
    void setDispo(int dispo){this->dispo=dispo;}
    void setPrix(int prix){this->prix=prix;}
    void setCapacite(int capacite){this->capacite=capacite;}
// crud
    bool ajouter();
    bool supprimer(QString nom);
    QSqlQueryModel * afficher();
    bool update();
    bool recherche(int idS,QString nom,int prix);


};

#endif // SALLE_H
