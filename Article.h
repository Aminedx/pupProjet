#pragma once
#include"string"
#include<iostream>


using namespace std;
using namespace System;

ref class Article
{protected: 
	System::Double^ HT;
	System::Double^ TVA;
	System::String^ nomArticle;
	System::String^ nature;
	System::String^ ref;
private:
	int quantite;
	Double^ prix;
public:
	String^ getart();

	void setart(String^ nt, String^ na, String^ ref);
	Double^ calculTTC(Double ,Double );
	Double^ remise(Double);
	Article();
	int^ getqt();
	void setqt(int qt);
    double^ getdb();
	void setdb(Double h, Double tv, Double p);
	string ajouter();
	string afficher();
	void supprimer();
};

