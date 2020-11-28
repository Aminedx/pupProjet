#pragma once
#include"personne.h"
#include"string"
#include<iostream>
#include <ctime>


using namespace std;
using namespace System;

ref class personnel:public personne
{private:
	System::String^ addresse;
	System::String^ encadreur;
	
	
public:
   
	int  DateEmbauche();
	String^ getadd();
	void setadd(String^ add);
	string ajouter();
	string afficher();
	void supprimer();
	personnel();
        
       
};

