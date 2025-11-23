#include "X215.h"
#include "Compteur.h"
#include <cmath>

int X215::bloquer()
{
	if (rageCombat) {
		return (force * 3);
	}
	else {
		return (vitesse / (3 + force));
	}
}

void X215::mouvement(int& x, int& y)
{
	switch (direction)
	{
	case 0:
		y -= vitesse;
		break;
	case 1:
		x += vitesse;
		break;
	case 2:
		y += vitesse;
		break;
	case 3:
		x -= vitesse;
		break;
	default:
		break;
	}
}

void X215::superCourse(int& x, int& y)
{
	if (rageCombat) {
		mouvement(x, y);
	}
	else {
		int deplacement = vitesse + (vitesse * (force / 10));
		switch (direction) {
		case 0:
			y -= deplacement;
			break;
		case 1:
			x += deplacement;
			break;
		case 2:
			y += deplacement;
			break;
		case 3:
			x -= deplacement;
			break;
		default:
			break;
		}
	}
}

void X215::esquive(int& x, int& y, int& xDanger, int& yDanger)
{
	int distance = sqrt(pow(x - xDanger, 2) + pow(y - yDanger, 2));

	if (distance <= 3)
	{
		if (distance == 0)
		{
			tournerLesTalons();
		}
		else
		{
			direction = rand() % 4;

			x += (vitesse / 2) * (direction == 1) - (vitesse / 2) * (direction == 3);
			y += (vitesse / 2) * (direction == 2) - (vitesse / 2) * (direction == 0);
		}
	}
}

void X215::tournerLesTalons()
{
	direction = (direction + 2) % 4;
}

void X215::exploserRage()
{
	rageCombat = true;
}

void X215::controlerRage()
{
	rageCombat = false;
}

X215::X215(string nom, int direction, int force, int vitesse, int vision)
{
	Compteur::ajouterConstructeur();
	setDirection(direction);
	this->nom = nom;
	this->vitesse = vitesse;
	this->vision = vision;
	this->force = force;
}



X215::X215(const X215&)
{
	Compteur::ajouterConstructeurCopie();
}

X215::~X215()
{
	Compteur::ajouterDestructeur();
}

void X215::setDirection(int direction)
{
	if (direction >= 0 && direction <= 3)
		this->direction = direction;
	else
		this->direction = 0;
}

void X215::setRageCombat(bool rager)
{
	rageCombat = rager;
}

