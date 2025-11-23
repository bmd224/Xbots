#include "X212.h"
#include "Compteur.h"
#include <cmath>
#include <iostream>

using namespace std;

void X212::mouvement(int& x, int& y)
{
	switch (direction)
	{
	case 0:
		y -= vitesse + 1;
		break;
	case 1:
		x += vitesse + 1;
		break;
	case 2:
		y += vitesse + 1;
		break;
	case 3:
		x -= vitesse + 1;
		break;
	default:
		break;
	}
}

void X212::superCourse(int& x, int& y)
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

void X212::esquive(int& x, int& y, int& xDanger, int& yDanger)
{
	int distanceX = x - xDanger;
	int distanceY = y - yDanger;
	int distance = sqrt(distanceX * distanceX + distanceY * distanceY);

	if (distance < 3) {
		return;
	}

	int nouvelleDirection;
	if (distanceX < 0) {
		nouvelleDirection = 1;
	}
	else if (distanceX > 0) {
		nouvelleDirection = 3;
	}
	else if (distanceY < 0) {
		nouvelleDirection = 2;
	}
	else {
		nouvelleDirection = 0;
	}

	if (nouvelleDirection != direction) {
		direction = nouvelleDirection;
		return;
	}

	int nouveauX = x;
	int nouveauY = y;
	mouvement(nouveauX, nouveauY);
	x = (x + nouveauX) / 2;
	y = (y + nouveauY) / 2;
}

X212::X212(string nom, int vitesse, int force, int direction, int vision)
{
	Compteur::ajouterConstructeur();
	setDirection(direction);
	this->nom = nom;
	this->vitesse = vitesse;
	this->vision = vision;
	this->force = force;
}

X212::X212(const X212&)
{
	Compteur::ajouterConstructeurCopie();
}

X212::~X212()
{
	Compteur::ajouterDestructeur();
}

void X212::setDirection(int direction)
{
	if (direction >= 0 && direction <= 3)
		this->direction = direction;
	else
		this->direction = 0;
}
