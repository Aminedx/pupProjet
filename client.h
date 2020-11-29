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

public:
	client();
	String^ getclient();
	void setclient(String^ nc,String^ af,String^ al);
	//string ajouter();
	//string afficher();
	//void supprimer();
};
value struct Date
{
	int jour, mois, annee;
private:
	Date* date_naissance;
public:
	int^ Date::getdn()
	{
		return date_naissance->jour + date_naissance->mois + date_naissance->annee;
	}
	void Date::setdn(int j, int m, int a) {
		this->date_naissance->jour = j;
		this->date_naissance->mois = m;
		this->date_naissance->annee = a;
	}
};

