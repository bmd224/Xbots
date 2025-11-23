#include "R234.h"
#include "Compteur.h"
#include <cmath>

int R234::doAttack(int defenceEnemy)
{
	int defence = strength - defenceEnemy;
	if (defence < 0) {
		defence = 0;
	}
	return defence;
}

int R234::doProtect(int attackEnemy)
{
	int protect = (attackEnemy - (speed + strength) / 2);
	if (protect < 0) {
		protect = 0;
	}
	return protect;
}

void R234::doMove(int& x, int& y)
{
	if (direction == 0) {
		y -= speed;
	}

	else if (direction == 1) {
		x += speed;
	}

	else if (direction == 2) {
		y += speed;
	}

	else if (direction == 3) {
		x -= speed;
	}
}

void R234::doRotateLeft()
{
	direction = (direction + 3) % 4;
}

void R234::doRotateRight()
{
	direction = (direction + 90) % 360;
	direction++;
	if (direction >= 0 && direction <= 3)
		this->direction = direction;
	else
		this->direction = 0;
	if (direction > 3) {
		direction = 0;
	}
}

R234::R234(int direction, int strength, int speed, int range)
{
	Compteur::ajouterConstructeur();
	setDirection(direction);
	this->strength = strength;
	this->speed = speed;
	this->range = range;
}

R234::R234(const R234&)
{
	Compteur::ajouterConstructeurCopie();
}

R234::~R234()
{
	Compteur::ajouterDestructeur();
}

void R234::setDirection(int direction)
{
	if (direction >= 0 && direction <= 3)
		this->direction = direction;
	else
		this->direction = 0;
}
