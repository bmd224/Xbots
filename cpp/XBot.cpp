#include "XBot.h"
#include "Compteur.h"

XBot::XBot()
{
	Compteur::ajouterConstructeur();
}

XBot::XBot(const XBot& xbot)
{
	Compteur::ajouterConstructeurCopie();
}

XBot::~XBot()
{
	Compteur::ajouterDestructeur();
}

void XBot::validerMouvement(int& x, int& y)
{
	if (x < 0)
		x = 0;

	if (x > 9)
		x = 9;

	if (y < 0)
		y = 0;

	if (y > 9)
		y = 9;
}
