#include "X213Adapter.h"
#include "Compteur.h"

X213Adapter::X213Adapter(X213* x213)
{
	energie = 10;
	this->x213 = x213;
	Compteur::ajouterConstructeur();
}

X213Adapter::X213Adapter(const X213Adapter&)
{
	Compteur::ajouterConstructeurCopie();
}

X213Adapter::~X213Adapter()
{
	delete x213;
	Compteur::ajouterDestructeur();
}

void X213Adapter::bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi)
{
	if (!estFonctionnel())
		return;
	int valeur = hasard.recupererValeurAleatoire(0, 100);
	if (valeur < 15)
		x213->tournerLesTalons();
	else if (valeur < 30)
		x213->superCourse(x, y);
	else
		x213->mouvement(x, y);
	validerMouvement(x, y);
}

int X213Adapter::attaquer(int x, int y, int xEnnemi, int yEnnemi)
{
	if (!estFonctionnel()) {
		return 0;
	}

	int distance = sqrt(pow(xEnnemi - x, 2) + pow(yEnnemi - y, 2));

	if (distance <= x213->getVision()) {
		int degat = x213->bloquer();
		defendre(degat);
		return degat;
	}
	return 0;
}

void X213Adapter::defendre(int degat)
{
	energie -= degat;
}

bool X213Adapter::estFonctionnel() const
{
	return energie > 0;
}

string X213Adapter::toString()
{
	return "X213ADAPTER {" + x213->getNom() + "}";
}
