#ifndef RECLAMATION_H
#define RECLAMATION_H
#include <string>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>

class reclamation
{
private:
  QString commentaire;
  int rate;
  int cin;
  QDate dat;
public:
    reclamation();
    reclamation(QDate dat,QString commentaire,int cin,int rate);
    //getters
    int getCin(){return cin;}
    QString getCommentaire(){return commentaire;}
    int getRate(){return rate;}
    QDate getDate(){return dat;}
   //setters
    void setCommentaire(QString commentaire){this->commentaire=commentaire;}
    void setDate(QDate dat){this->dat=dat;}
    void setRate(int rate){this->rate=rate;}
    void setCin(int  cin){this->cin=cin;}
    //crud
    bool ajouter();
    bool supprimer(int cin);
    QSqlQueryModel * afficher();
    bool update();
};

#endif // RECLAMATION_H
