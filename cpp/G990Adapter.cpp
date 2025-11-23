#include "G990Adapter.h"
#include"Compteur.h"

G990Adapter::G990Adapter(G990* g990)
{
	energie = 10;
	this->g990 = g990;
	Compteur::ajouterConstructeur();
}

G990Adapter::G990Adapter(const G990Adapter&)
{
	Compteur::ajouterConstructeurCopie();
}

G990Adapter::~G990Adapter()
{
	delete g990;
	Compteur::ajouterDestructeur();
}

void G990Adapter::bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi)
{
	if (x < xEnnemi - g990->getVision() || x > xEnnemi + g990->getVision()) {
		if (x < xEnnemi) {
			g990->setEst(true);
			g990->deplacementEstOuest(1, x, y);
		}
		else {
			g990->setEst(false);
			g990->deplacementEstOuest(-1, x, y);
		}
	}
	else if (y < yEnnemi - g990->getVision() || y > yEnnemi + g990->getVision()) {
		if (y < yEnnemi) {
			g990->setNord(true);
			g990->deplacementNordSud(1, x, y);
		}
		else {
			g990->setNord(false);
			g990->deplacementNordSud(-1, x, y);
		}
	}
	else {}
	validerMouvement(x, y);
}

int G990Adapter::attaquer(int x, int y, int xEnnemi, int yEnnemi)
{
	int distance = abs(x - xEnnemi) + abs(y - yEnnemi);
	if (distance <= g990->getVision()) {
		return 10;
	}
	return 0;
}

void G990Adapter::defendre(int degat)
{
	energie -= degat;
}

bool G990Adapter::estFonctionnel() const
{
	return energie > 0;
}

string G990Adapter::toString()
{
	return "G990ADAPTER { }";
}
