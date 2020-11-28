#include "personnel.h"
#include <ctime>
using namespace std;

int  personnel::DateEmbauche()
{
    time_t actuel = time(0);
    tm* ltm = localtime(&actuel);
   int  y = 1900 + ltm->tm_year;
    cout << "Année" << y << endl;
    int m = 1 + ltm->tm_mon;
    cout << "Mois: " << m << endl;
    int d = ltm->tm_mday;
    cout << "Day: " << d << endl;
    return (y, m, d);
}

String^ personnel::getadd()
{
    return addresse;
}

void personnel::setadd(String^ add)
{
    this->addresse = add;
}

string personnel::ajouter()
{
    return string();
}

string personnel::afficher()
{
    return string();
}

void personnel::supprimer()
{
    
}

personnel::personnel()
{
    this->encadreur = "";
    this->addresse = "";
}
