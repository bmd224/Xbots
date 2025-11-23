#include "R234Adapter.h"
#include"Compteur.h"

R234Adapter::R234Adapter(R234* r234)
{
	energie = 10;
	this->r234 = r234;
	Compteur::ajouterConstructeur();
}

R234Adapter::R234Adapter(const R234Adapter&)
{
	Compteur::ajouterConstructeurCopie();
}

R234Adapter::~R234Adapter()
{
	delete r234;
	Compteur::ajouterDestructeur();
}

void R234Adapter::bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi)
{
	int newX = x, newY = y;
	r234->doMove(newX, newY);

	validerMouvement(newX, newY);

	x = newX;
	y = newY;

	validerMouvement(x, y);
}

int R234Adapter::attaquer(int x, int y, int xEnnemi, int yEnnemi)
{
	int degats = r234->doAttack(0);
	int chance = hasard.recupererValeurAleatoire(1, 100);
	if (chance <= 30) {
		degats = 0;
	}

	double distance = sqrt(pow(x - xEnnemi, 2) + pow(y - yEnnemi, 2));
	if (distance > r234->getRange()) {
		degats = 0;
	}
	return degats;
}

void R234Adapter::defendre(int degat)
{
	degat = r234->doProtect(degat);

	energie -= degat;
	if (energie < 0) {
		energie = 0;
	}
}

bool R234Adapter::estFonctionnel() const
{
	return energie > 0;
}

string R234Adapter::toString()
{
	return "R234ADAPTER { }";
}

