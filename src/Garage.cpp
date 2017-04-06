/*
 * Garage.cpp
 *
 *  Created on: 28 mars 2017
 *      Author: alexandrecastera
 */

#include "Garage.h"

using namespace std;

//Vehicule
//Constructeur
Vehicule::Vehicule(int prix, int anneeFab): m_prix(prix), m_anneeFab(anneeFab){

}

void Vehicule::affiche() const {
	cout << "Ceci est un vehicule de " << m_anneeFab << " coutant " << m_prix << " euros." << endl;
}

//Destructeur
Vehicule::~Vehicule(){

}



// Sous classe Voiture
//Constructeur
Voiture::Voiture(int prix, int anneeFab, int portes): Vehicule(prix, anneeFab), m_portes(portes){

}

void Voiture::affiche() const {
	cout << "Ceci est une voiture de " << m_anneeFab << " avec " << m_portes << " portes et coutant " << m_prix << " euros." << endl;
}

//Destructeur
Voiture::~Voiture(){

}

int Voiture::nbrRoues() const{
	return 4;
}




//Sous classe Moto
//Constructeur
Moto::Moto(int prix, int anneeFab, double vitesse): Vehicule(prix, anneeFab), m_vitesse(vitesse){

}

void Moto::affiche() const {
	cout << "Ceci est une moto de " << m_anneeFab << " allant a " << m_vitesse << " km/h et coutant " << m_prix << " euros." << endl;
}

//Destructeur
Moto::~Moto(){

}

int Moto::nbrRoues() const{
	return 2;
}



//Sous classe Camion
//Constructeur
Camion::Camion(int prix, int anneeFab, double poids): Vehicule(prix, anneeFab), m_poids(poids){

}

void Camion::affiche() const {
	cout << "Ceci est un camion de " << m_anneeFab << " pouvant transporter " << m_poids << " kg et coutant " << m_prix << " euros." << endl;
}

//Destructeur
Camion::~Camion(){

}

int Camion::nbrRoues() const{
	return 4;
}
