#pragma once
#include"personne.h"
#include"string"
#include<iostream>
#include <ctime>


using namespace std;
using namespace System;
ref class client: public personne
{
protected:
	System::String^ numclient;
	System::String^ addDeFacturation;
	System::String^ addDeLivraison;
private:
	Date^* date_naissance;
public:
	client();
	String^ getclient();
	int^ getdn();
	void setclient(String^ nc,String^ af,String^ al, int j, int m, int a);
	string ajouter();
	string afficher();
	void supprimer();
};
ref struct Date
{
	int jour, mois, annee;
};

