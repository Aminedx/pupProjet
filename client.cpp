#include "client.h"

client::client()
{
	this->addDeFacturation = "";
	this->addDeLivraison = "";
	this->numclient = "";
	
}

String^ client::getclient()
{
	return addDeFacturation + addDeLivraison + numclient;
	
}



void client::setclient(String^ nc, String^ af, String^ al)
{
	this->numclient = nc;
	this->addDeFacturation=af;
	this->addDeLivraison = al;
	
}
