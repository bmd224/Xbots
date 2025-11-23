#include "X215Adapter.h"
#include"Compteur.h"

X215Adapter::X215Adapter(X215* x215)
{
	energie = 10;
	this->x215 = x215;
	Compteur::ajouterConstructeur();
}

X215Adapter::X215Adapter(const X215Adapter&)
{
	Compteur::ajouterConstructeurCopie();
}

X215Adapter::~X215Adapter()
{
	delete x215;
	Compteur::ajouterDestructeur();
}

void X215Adapter::bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi)
{
	if (!estFonctionnel())
		return;
	int valeur = hasard.recupererValeurAleatoire(0, 100);
	if (valeur < 15)
		x215->superCourse(x, y);
	else if (valeur < 30)
		x215->esquive(x, y, xEnnemi, yEnnemi);
	else
		x215->mouvement(x, y);
	validerMouvement(x, y);
}

int X215Adapter::attaquer(int x, int y, int xEnnemi, int yEnnemi)
{
	int distance = abs(x - xEnnemi) + abs(y - yEnnemi);
	if (distance <= x215->getVision()) {
		return 10;
	}
	return 0;

}

void X215Adapter::defendre(int degat)
{
	energie -= degat;
}

bool X215Adapter::estFonctionnel() const
{
	return energie > 0;
}

string X215Adapter::toString()
{
	return "X215ADAPTER {" + x215->getNom() + "}";
}
