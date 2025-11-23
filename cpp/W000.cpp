#include "W000.h"
#include "Compteur.h"
#include <cmath>

void W000::bloquer(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi)
{
	int distanceAmi = abs(x - xAmi) + abs(y - yAmi);
	int distanceEnnemi = abs(x - xEnnemi) + abs(y - yEnnemi);

	int blocX = xEnnemi;
	int blocY = yEnnemi;
	switch (direction)
	{
	case 0:
		if (yEnnemi > y)
			blocY = yEnnemi - distanceAmi - 1;
		break;
	case 1:
		if (xEnnemi < x)
			blocX = xEnnemi + distanceAmi + 1;
		break;
	case 2:
		if (yEnnemi < y)
			blocY = yEnnemi + distanceAmi + 1;
		break;
	case 3:
		if (xEnnemi > x)
			blocX = xEnnemi - distanceAmi - 1;
		break;
	}

	int deltaX = abs(x - blocX);
	int deltaY = abs(y - blocY);
	if (deltaX <= vitesse && deltaY <= vitesse)
	{

		x = blocX;
		y = blocY;
	}
	else
	{
		if (deltaX >= deltaY)
		{
			if (x < blocX)
				x += vitesse;
			else
				x -= vitesse;
		}
		else
		{
			if (y < blocY)
				y += vitesse;
			else
				y -= vitesse;
		}
	}
}

void W000::bouger(int& x, int& y)
{
	switch (direction) {
	case 1:
		y -= (vitesse + 2);
		break;
	case 2:
		x += (vitesse + 2);
		break;
	case 3:
		y += (vitesse + 2);
		break;
	case 4:
		x -= (vitesse + 2);
		break;
	default:
		break;
	}
}

W000::W000(string nom, int direction, int force, int vitesse, int vision)
{
	Compteur::ajouterConstructeur();
	this->nom = nom;
	setDirection(direction);
	setForce(force);
	setVitesse(vitesse);
	setVision(vision);
}

W000::W000(const W000&)
{
	Compteur::ajouterConstructeurCopie();
}

W000::~W000()
{
	Compteur::ajouterDestructeur();
}

void W000::setDirection(int direction)
{
	if (direction >= 0 && direction <= 3)
		this->direction = direction;
	else
		this->direction = 0;
}
