//============================================================================
// Name        : Garage.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Garage.h"
#include <vector>
using namespace std;

int main()
{
    vector<Vehicule*> listeVehicules;

    listeVehicules.push_back(new Voiture(15000, 2005, 5));
    listeVehicules.push_back(new Voiture(12000, 2010, 3));
    listeVehicules.push_back(new Moto(2000, 2003, 212.5));

    listeVehicules[0]->affiche();
    //On affiche les informations de la première voiture

    listeVehicules[2]->affiche();
    //Et celles de la moto

    for(int i(0); i<listeVehicules.size(); ++i)
    {
        delete listeVehicules[i];  //On libère la i-ème case mémoire allouée
        listeVehicules[i] = 0;  //On met le pointeur à 0 pour éviter les soucis
    }

    return 0;
}
