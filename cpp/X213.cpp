#include "X213.h"
#include "Compteur.h"
#include <cmath>
#include <string>

void X213::mouvement(int& x, int& y)
{
	switch (direction)
	{
	case 1:
		y -= vitesse + 1;
		break;
	case 2:
		x += vitesse + 1;
		break;
	case 3:
		y += vitesse + 1;
		break;
	case 4:
		x -= vitesse + 1;
		break;
	default:
		break;
	}
}

void X213::superCourse(int& x, int& y)
{
	if (direction == 0) {
		y -= vitesse + (vitesse * (force / 10));
	}
	else if (direction == 1) {
		x += vitesse + (vitesse * (force / 10));
	}
	else if (direction == 2) {
		y += vitesse + (vitesse * (force / 10));
	}
	else {
		x -= vitesse + (vitesse * (force / 10));
	}
}

void X213::tournerLesTalons()
{
	direction = (direction + 2) % 4;
}

X213::X213(string nom, int direction, int force, int vitesse, int vision)
{
	Compteur::ajouterConstructeur();
	setDirection(direction);
	this->nom = nom;
	this->vitesse = vitesse;
	this->vision = vision;
	this->force = force;
}


X213::X213(const X213&)
{
	Compteur::ajouterConstructeurCopie();
}

X213::~X213()
{
	Compteur::ajouterDestructeur();
}

void X213::setDirection(int direction)
{
	if (direction >= 0 && direction <= 3)
		this->direction = direction;
	else
		this->direction = 0;
}
