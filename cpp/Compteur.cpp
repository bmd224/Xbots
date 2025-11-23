#include"Compteur.h"
#include<string>
#include <cmath>

Compteur::Compteur()
{
	ajouterConstructeur();
}

Compteur::Compteur(const Compteur&)
{
	ajouterConstructeurCopie();
}

Compteur::~Compteur()
{
	ajouterDestructeur();
}

void Compteur::ajouterConstructeur()
{
	++constructeur;
}

void Compteur::ajouterConstructeurCopie()
{
	++constructeurCopie;
}

void Compteur::ajouterDestructeur()
{
	++destructeur;
}

int Compteur::getNbreConstructeurs()
{
	return constructeur;
}

int Compteur::getNbreConstructeursCopie()
{
	return constructeurCopie;
}

int Compteur::getNbreDestructeurs()
{
	return destructeur;
}
