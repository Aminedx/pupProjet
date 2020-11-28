#include "client.h"

client::client()
{
	this->addDeFacturation = "";
	this->addDeLivraison = "";
	this->numclient = "";
	this->date_naissance->jour = 0;
	this->date_naissance->mois = 0;
	this->date_naissance->annee = 0;
}

String^ client::getclient()
{
	return addDeFacturation + addDeLivraison + numclient;
	
}

int^ client::getdn()
{
	return date_naissance->jour + date_naissance->mois + date_naissance->annee;
}

void client::setclient(String^ nc, String^ af, String^ al,int j,int m,int a)
{
	this->numclient = nc;
	this->addDeFacturation=af;
	this->addDeLivraison = al;
	this->date_naissance->jour = j;
	this->date_naissance->mois = m;
	this->date_naissance->annee = a;
}
