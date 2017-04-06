/*
 * Garage.h
 *
 *  Created on: 28 mars 2017
 *      Author: alexandrecastera
 */

#ifndef GARAGE_H_
#define GARAGE_H_

#include <iostream>

class Vehicule{
public :
	Vehicule(int prix, int anneeFab);
	virtual void affiche() const;
	virtual ~Vehicule();
	virtual int nbrRoues() const = 0;

protected :
	int m_prix;
	int m_anneeFab;
};

class Voiture: public Vehicule{
public :
	Voiture(int prix, int anneeFab, int portes);
	virtual void affiche() const;
	virtual ~Voiture();
	virtual int nbrRoues() const;

private :
	int m_portes;
};

class Moto: public Vehicule{
public :
	Moto(int prix, int anneeFab, double vitesse);
	virtual void affiche() const;
	virtual ~Moto();
	virtual int nbrRoues() const;

private :
	double m_vitesse;
};

class Camion: public Vehicule{
public :
	Camion(int prix, int anneeFab, double poids);
	virtual void affiche() const;
	virtual ~Camion();
	virtual int nbrRoues() const;

private :
	double m_poids;
};

#endif /* GARAGE_H_ */
