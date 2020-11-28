#include "personne.h"
#include<iostream>
#include<string>

using namespace std;
using namespace System;

String^ personne::getinfo()
{
	
	return (nom,prenom);
	
}

void personne::setinfo(String^ n , String^ p )
{
	this->nom = n;
	this->prenom = prenom;


}

string personne::ajouter()
{
	return string();
}

string personne::afficher()
{
	return string();
}

void personne::supprimer()
{
	throw gcnew System::NotImplementedException();
}

personne::personne()
{
	this->nom = "";
	this->prenom = "";
}
