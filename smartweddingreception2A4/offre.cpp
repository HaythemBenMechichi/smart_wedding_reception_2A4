#include "offre.h"

offre::offre()
{

}
offre::offre(int maq,int prixmaq,int voiture,int prixv,int prixr,int prixb,int tot)
{
    this->maq=maq;
    this->prixmaq=prixmaq;
    this->voiture=voiture;
    this->prixv=prixv;
    this->prixr=prixr;
    this->prixb=prixb;
    this->tot=tot;

}
bool offre::ajouter()
{
    QSqlQuery query;

query.prepare("insert into offre(maq,prixmaq,voiture,prixv,prixr,prixb,tot)"
             "values(maq,prixmaq,voiture,prixv,prixr,prixb,tot)");
query.bindValue(":maq",maq);
query.bindValue(":prixmaq",prixmaq);
query.bindValue(":voiture",voiture);
query.bindValue(":prixv",prixv);
query.bindValue(":prixr",prixr);
query.bindValue(":prixb",prixb);
query.bindValue(":tot",tot);
return query.exec();

}


