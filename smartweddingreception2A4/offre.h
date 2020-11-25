#ifndef OFFRE_H
#define OFFRE_H
#include <string>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>
using namespace std;
class offre
{
private:
    int maq;
    int prixmaq;
    int voiture;
    int prixv;
    int prixr;
    int prixb;
    int tot;
public:
    offre();
    offre(int maq,int prixmaq,int voiture,int prixv,int prixr,int prixb,int tot);
    //getters

      int getTotal(){return tot;}
      int getPrixmaq(){return prixmaq;}
      int getMaq(){return maq;}
      int getPrixv(){return prixv;}
      int getVoiture(){return voiture;}
      int getPrixr(){return prixr;}
      int getPrixb(){return prixb;}

    //setters

      void setTotal(int tot){this->tot=tot;}
      void setPrixmaq(int prixmaq){this->prixmaq=prixmaq;}
      void setPrixb(int prixb){this->prixb=prixb;}
      void setPrixr(int prixr){this->prixr=prixr;}
      void setPrixv(int prixv){this->prixv=prixv;}
      void setMaq(int maq){this->maq=maq;}
      void setVoiture(int voiture){this->voiture=voiture;}
      //crud
      bool ajouter();

};

#endif // OFFRE_H
