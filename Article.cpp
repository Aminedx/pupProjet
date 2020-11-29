#include "Article.h"

String^ Article::getart()
{
    
    return (nomArticle, nature, ref);
    
}

void Article::setart(String^ nt, String^ na, String^ ref)
{
    this->nature = nt;
    this->nomArticle = na;
    this->ref = ref;
    
}

Double^ Article::calculTTC(Double TVA, Double HT)
{
    Double TTC = TVA + HT;
    return TTC;
}

Article::Article()
{
    this->nature = "";
    this->nomArticle = "";
    this->ref = "";
    this->quantite = 0;
    this->HT = 0.0;
    this->TVA = 0.0;
    this->prix = 0.0;
}

int^ Article::getqt()
{
    
    return(quantite);
}

void Article::setqt(int qt)
{
    this->quantite = qt;
}

double^ Article::getdb()
{
    return (HT, TVA, prix);
}

void Article::setdb(Double h, Double tv, Double p)
{
    this->HT = h;
    this->TVA = tv;
    this->prix = p;

}
