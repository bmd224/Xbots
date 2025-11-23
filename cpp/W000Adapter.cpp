#include "W000Adapter.h"
#include"Compteur.h"


W000Adapter::W000Adapter(W000* w000)
{
	energie = 10;
	this->w000 = w000;
	Compteur::ajouterConstructeur();
}

W000Adapter::W000Adapter(const W000Adapter&)
{
	Compteur::ajouterConstructeurCopie();
}

W000Adapter::~W000Adapter()
{
	delete w000;
	Compteur::ajouterDestructeur();
}

void W000Adapter::bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi)
{
	int dirX = xEnnemi - xAmi;
	int dirY = yEnnemi - yAmi;

	double norme = sqrt(dirX * dirX + dirY * dirY);
	if (norme > 0) {
		dirX /= norme;
		dirY /= norme;
	}

	int newX = x + dirX * w000->getVitesse();
	int newY = y + dirY * w000->getVitesse();

	validerMouvement(newX, newY);

	x = newX;
	y = newY;

	validerMouvement(x, y);
}

int W000Adapter::attaquer(int x, int y, int xEnnemi, int yEnnemi)
{
	double distance = sqrt(pow(xEnnemi - x, 2) + pow(yEnnemi - y, 2));
	if (distance <= w000->getVision()) {
		return w000->getForce();
	}
	return 0;
}

void W000Adapter::defendre(int degat)
{
	energie -= degat;
}

bool W000Adapter::estFonctionnel() const
{
	return energie > 0;
}

string W000Adapter::toString()
{
	return "w000ADAPTER {" + w000->getNom() + "}";
}
