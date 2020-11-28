#pragma once
#include"string"
#include<iostream>


using namespace std;
using namespace System;

 ref class personne
{protected :
	 System::String^  nom;
	System::String^ prenom;
	
public:
	String^ getinfo();
	void setinfo(String^ n ,String^ m);
	string ajouter();
	string afficher();
	void supprimer();
	 personne();
};

