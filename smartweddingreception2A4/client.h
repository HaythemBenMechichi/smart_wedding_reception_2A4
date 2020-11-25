#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>
using namespace std;
class client
{
private:
  QString nom;
  QString prenom;
  int age;
  int cin;
  QString region;
  int numero;
  QString mail;
  QDate dat;
public:
  //constructeur
    client();
    client(QString nom,QString prenom,int age,int cin,int numero,QString mail,QDate dat,QString region);
  //getters
    QString getNom(){return nom;}
    QString getPrenom(){return prenom;}
    int getAge(){return age;}
    int getCin(){return cin;}
    QString getRegion(){return region;}
    int getNumero(){return numero;}
    QString getMail(){return mail;}
    QDate getDate(){return dat;}
  //setters
    void setNom(QString nom){this->nom=nom;}
    void setPrenom(QString prenom){this->prenom=prenom;}
    void setAge(int age){this->age=age;}
    void setCin(int cin){this->cin=cin;}
    void setRegion(QString region){this->region=region;}
    void setNumero(int numero){this->numero=numero;}
    void setMail(QString mail){this->mail=mail;}
    void setDate(QDate dat){this->dat=dat;}
    //crud
    bool ajouter();
    bool supprimer(int cin);
    QSqlQueryModel * afficher();
    bool update();
};

#endif // CLIENT_H
