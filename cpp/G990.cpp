#include "G990.h"
#include "Compteur.h"
#include <cmath>

void G990::deplacementNordSud(int valeur, int& x, int& y)
{
	if (!nord) {
		if ((y - valeur) < -energieMaximale) {
			y = -energieMaximale;
		}
		else {
			y -= valeur;
		}
	}
	else {
		if ((y + valeur) > energieMaximale) {
			y = energieMaximale;
		}
		else {
			y += valeur;
		}
	}
}

void G990::deplacementEstOuest(int valeur, int& x, int& y)
{
	if (!est) {
		if ((x + valeur) > energieMaximale) {
			x = energieMaximale;
		}
		else {
			x += valeur;
		}
	}
	else {
		if ((x - valeur) < -energieMaximale) {
			x = -energieMaximale;
		}
		else {
			x -= valeur;
		}
	}
}

void G990::regarderNord()
{
	nord = true;
	est = false;
}

void G990::regarderSud()
{
	nord = false;
	est = true;
}

void G990::regarderEst()
{
	nord = false;
	est = true;
}

void G990::regarderOuest()
{
	nord = true;
	est = false;
}

void G990::bloquer(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi)
{
	if (xAmi == xEnnemi) {
		if (yAmi < yEnnemi) {
			if (y > 0 && (y - energieMaximale) >= yAmi) {
				deplacementNordSud(-energieMaximale, x, y);
				regarderNord();
			}
			else {
				if (yAmi > y) {
					regarderNord();
				}
				else {
					regarderSud();
				}
			}
		}
		else {
			if (y < 100 && (y + energieMaximale) <= yAmi) {
				deplacementNordSud(energieMaximale, x, y);
				regarderSud();
			}
			else {
				if (yAmi > y) {
					regarderNord();
				}
				else {
					regarderSud();
				}
			}
		}
	}
	else if (yAmi == yEnnemi) {
		if (xAmi < xEnnemi) {
			if (x > 0 && (x - energieMaximale) >= xAmi) {
				deplacementEstOuest(-energieMaximale, x, y);
				regarderOuest();
			}
			else {
				if (xAmi > x) {
					regarderOuest();
				}
				else {
					regarderEst();
				}
			}
		}
		else {
			if (x < 100 && (x + energieMaximale) <= xAmi) {
				deplacementEstOuest(energieMaximale, x, y);
				regarderEst();
			}
			else {
				if (xAmi > x) {
					regarderOuest();
				}
				else {
					regarderEst();
				}
			}
		}
	}
}

G990::G990(bool nord, bool est, long energiePhysique, long energieMaximale, long vision)
{
	Compteur::ajouterConstructeur();
	setNord(nord);
	setEst(est);
	setEnergiePhysique(energiePhysique);
	setEnergieMaximale(energieMaximale);
	setVision(vision);
}


G990::G990(const G990&)
{
	Compteur::ajouterConstructeurCopie();
}

G990::~G990()
{
	Compteur::ajouterDestructeur();
}

void G990::setNord(bool nord)
{
	this->nord = nord;
}