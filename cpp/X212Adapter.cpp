#include "X212Adapter.h"
#include"Compteur.h"

X212Adapter::X212Adapter(X212* x212)
{
	energie = 10;
	this->x212 = x212;
	Compteur::ajouterConstructeur();
}

X212Adapter::X212Adapter(const X212Adapter&)
{
	Compteur::ajouterConstructeurCopie();
}

X212Adapter::~X212Adapter()
{
	delete x212;
	Compteur::ajouterDestructeur();
}
bool X212Adapter::estFonctionnel() const
{
	return energie > 0;
}

void X212Adapter::bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi)
{
	if (!estFonctionnel())
		return;
	int valeur = hasard.recupererValeurAleatoire(0, 100);
	if (valeur < 15) {
		x212->superCourse(x, y);
		validerMouvement(x, y);
	}
	else if (valeur < 30) {
		x212->esquive(x, y, xEnnemi, yEnnemi);
		validerMouvement(x, y);
	}
	else
		x212->mouvement(x, y);
	validerMouvement(x, y);
}

int X212Adapter::attaquer(int x, int y, int xEnnemi, int yEnnemi)
{
	if (!estFonctionnel()) {
		return 0;
	}

	int distance = sqrt(pow(xEnnemi - x, 2) + pow(yEnnemi - y, 2));
	if (distance <= x212->getVision()) {
		int degat = x212->bloquer();
		defendre(degat);
		return degat;
	}
	return 0;
}

void X212Adapter::defendre(int degat)
{
	energie -= degat;
}

string X212Adapter::toString()
{
	return "X212ADAPTER {" + x212->getNom() + "}";
}
