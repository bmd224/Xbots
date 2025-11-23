


//ligne pour  y






/*#include <iostream>
#include "X212.h"
#include "X213.h"
#include "X215.h"
#include "R234.h"
#include "X212Adapter.h"
#include "X213Adapter.h"
#include "X215Adapter.h"
#include "R234Adapter.h"
#include "G990Adapter.h"
#include "W000Adapter.h"
#include "XBotManufacture.h"
#include "Arene.h"

using namespace std;

void testX212()
{
	int x = 3;
	int y = 5;
	string nom = "x212_1";
	int direction = 0;
	int force = 4;
	int vitesse = 3;
	int vision = 5;

	X212* x212 = new X212(nom, direction, force, vitesse, vision);


	cout << "NOM       : " << x212->getNom() << endl;
	x212->setDirection(-1000);
	cout << "DIRECTION : " << x212->getDirection() << endl;
	cout << "FORCE     : " << x212->getForce() << endl;
	cout << "VITESSE   : " << x212->getVitesse() << endl;
	cout << "VISION    : " << x212->getVision() << endl;

	cout << "BLOQUER   : " << x212->bloquer() << endl;
	cout << "--> (" << x << "," << y << "," << x212->getDirection() <<  ")" << endl;
	x212->mouvement(x, y);
	cout << "MOUVEMENT ";
	cout << "--> (" << x << "," << y << "," << x212->getDirection() << ")" << endl;

	x212->setDirection(2);
	cout << "CHANGEMENT DE DIRECTION";
	cout << "--> (" << x << "," << y << "," << x212->getDirection() << ")" << endl;
	x212->superCourse(x, y);
	cout << "SUPER COURSE ";
	cout << "--> (" << x << "," << y << "," << x212->getDirection() << ")" << endl;
	cout << "MOUVEMENT ";
	x212->mouvement(x, y);
	cout << "--> (" << x << "," << y << "," << x212->getDirection() << ")" << endl;

	x212->setDirection(1);
	int d = y + 2;
	x212->esquive(x, y, x, d);
	cout << "ESQUIVE";
	cout << "--> (" << x << "," << y << "," << x212->getDirection() << ")" << endl;
}

void testX213()
{
	int x = 3;
	int y = 5;
	string nom = "x213_1";
	int direction = 0;
	int force = 4;
	int vitesse = 3;
	int vision = 5;


	X213* x213 = new X213(nom, direction, force, vitesse, vision);


	cout << "NOM       : " << x213->getNom() << endl;
	x213->setDirection(-1000);
	cout << "DIRECTION : " << x213->getDirection() << endl;
	cout << "FORCE     : " << x213->getForce() << endl;
	cout << "VITESSE   : " << x213->getVitesse() << endl;
	cout << "VISION    : " << x213->getVision() << endl;

	cout << "BLOQUER   : " << x213->bloquer() << endl;
	cout << "--> (" << x << "," << y << "," << x213->getDirection() << ")" << endl;
	x213->mouvement(x, y);
	cout << "MOUVEMENT ";
	cout << "--> (" << x << "," << y << "," << x213->getDirection() << ")" << endl;

	x213->setDirection(2);
	cout << "CHANGEMENT DE DIRECTION";
	cout << "--> (" << x << "," << y << "," << x213->getDirection() << ")" << endl;

	x213->superCourse(x, y);
	cout << "SUPER COURSE ";
	cout << "--> (" << x << "," << y << "," << x213->getDirection() << ")" << endl;
	cout << "MOUVEMENT ";
	x213->mouvement(x, y);
	cout << "--> (" << x << "," << y << "," << x213->getDirection() << ")" << endl;

	x213->setDirection(1);
	cout << "CHANGEMENT DE DIRECTION";
	cout << "--> (" << x << "," << y << "," << x213->getDirection() << ")" << endl;
	x213->tournerLesTalons();
	cout << "TOURNER LES TALONS ";
	cout << "--> (" << x << "," << y << "," << x213->getDirection() << ")" << endl;
}

void testX215()
{
	int x = 3;
	int y = 5;
	string nom = "x215_1";
	int direction = 0;
	int force = 4;
	int vitesse = 3;
	int vision = 5;

	X215* x215 = new X215(nom, direction, force, vitesse, vision);


	cout << "NOM       : " << x215->getNom() << endl;
	x215->setDirection(-1000);
	cout << "DIRECTION : " << x215->getDirection() << endl;
	cout << "FORCE     : " << x215->getForce() << endl;
	cout << "VITESSE   : " << x215->getVitesse() << endl;
	cout << "VISION    : " << x215->getVision() << endl;

	cout << "BLOQUER   : " << x215->bloquer() << endl;
	cout << "--> (" << x << "," << y << "," << x215->getDirection() << ")" << endl;
	x215->mouvement(x, y);
	cout << "MOUVEMENT ";
	cout << "--> (" << x << "," << y << "," << x215->getDirection() << ")" << endl;

	x215->setDirection(2);
	cout << "CHANGEMENT DE DIRECTION";
	cout << "--> (" << x << "," << y << "," << x215->getDirection() << ")" << endl;

	x215->superCourse(x, y);
	cout << "SUPER COURSE ";
	cout << "--> (" << x << "," << y << "," << x215->getDirection() << ")" << endl;
	cout << "MOUVEMENT ";
	x215->mouvement(x, y);
	cout << "--> (" << x << "," << y << "," << x215->getDirection() << ")" << endl;

	x215->setDirection(1);
	cout << "CHANGEMENT DE DIRECTION";
	cout << "--> (" << x << "," << y << "," << x215->getDirection() << ")" << endl;
	x215->tournerLesTalons();
	cout << "TOURNER LES TALONS ";
	cout << "--> (" << x << "," << y << "," << x215->getDirection() << ")" << endl;

	x215->setDirection(1);
	cout << "CHANGEMENT DE DIRECTION";
	cout << "--> (" << x << "," << y << "," << x215->getDirection() << ")" << endl;
	x215->esquive(x, y, x, y + 2);
	cout << "ESQUIVE";
	cout << "--> (" << x << "," << y << "," << x215->getDirection() << ")" << endl;

}

void testR234()
{
	int x = 3;
	int y = 5;
	int direction = 0;
	int strength = 4;
	int speed = 3;
	int range = 5;

	R234* r234 = new R234(direction, strength, speed, range);

	cout << "DIRECTION : " << r234->getDirection() << endl;
	cout << "STRENGTH  : " << r234->getStrength() << endl;
	cout << "SPEED     : " << r234->getSpeed() << endl;
	cout << "RANGE     : " << r234->getRange() << endl;

	cout << "ATTACK_1: " << r234->doAttack(2) << endl;
	cout << "ATTACK_2: " << r234->doAttack(6) << endl;

	cout << "PROTECT_1: " << r234->doProtect(2) << endl;
	cout << "PROTECT_2: " << r234->doProtect(7) << endl;

	cout << "--> (" << x << "," << y << "," << r234->getDirection() << ")" << endl;
	r234->doMove(x, y);
	cout << "--> (" << x << "," << y << "," << r234->getDirection() << ")" << endl;
	r234->doRotateRight();
	cout << "--> (" << x << "," << y << "," << r234->getDirection() << ")" << endl;
	r234->doRotateRight();
	r234->doRotateRight();
	r234->doRotateRight();
	r234->doRotateRight();
	r234->doRotateRight();
	r234->doRotateRight();
	cout << "--> (" << x << "," << y << "," << r234->getDirection() << ")" << endl;
	r234->doRotateLeft();
	r234->doRotateLeft();
	r234->doRotateLeft();
	r234->doRotateLeft();
	r234->doRotateLeft();
	cout << "--> (" << x << "," << y << "," << r234->getDirection() << ")" << endl;

	r234->doMove(x, y);
	r234->doMove(x, y);
	r234->doMove(x, y);
	r234->doMove(x, y);
	r234->doMove(x, y);
	r234->doMove(x, y);
	r234->doMove(x, y);
	r234->doMove(x, y);
	cout << "--> (" << x << "," << y << "," << r234->getDirection() << ")" << endl;
}

void testG990()
{
	int x = 3;
	int y = 5;
	bool nord = true;
	bool est = false;
	int energiePhysique = 7;
	int energieMaximale = 7;
	int vision = 5;

	G990* g990 = new G990(nord, est, energiePhysique, energieMaximale, vision);

	cout << "NORD       : " << g990->getNord() << endl;
	g990->regarderSud();
	cout << "NORD       : " << g990->getNord() << endl;

	cout << "EST       : " << g990->getEst() << endl;
	g990->regarderEst();
	cout << "EST       : " << g990->getEst() << endl;

	cout << "ENERGIE_P : " << g990->getEnergiePhysique() << endl;
	cout << "ENERGIE_M : " << g990->getEnergieMaximale() << endl;
	cout << "VISION    : " << g990->getVision() << endl;


	cout << "Deplacement SUD de 10" << endl;
	cout << "--> (" << x << "," << y << ")" << endl;
	g990->deplacementNordSud(10, x, y);
	cout << "--> (" << x << "," << y << ")" << endl;

	g990->regarderNord();
	cout << "Deplacement NORD de 200" << endl;
	cout << "--> (" << x << "," << y << ")" << endl;
	g990->deplacementNordSud(200, x, y);
	cout << "--> (" << x << "," << y << ")" << endl;


	cout << "Deplacement Est de 10" << endl;
	cout << "--> (" << x << "," << y << ")" << endl;
	g990->deplacementEstOuest(10, x, y);
	cout << "--> (" << x << "," << y << ")" << endl;

	g990->regarderOuest();
	cout << "Deplacement OUEST de 200" << endl;
	cout << "--> (" << x << "," << y << ")" << endl;
	g990->deplacementEstOuest(200, x, y);
	cout << "--> (" << x << "," << y << ")" << endl;

	// test blocage #1
	cout << "G990 est entre l'ami et l'ennemi" << endl;
	int xAmi = 2; int yAmi = 1; int xEnnemi = 8; int yEnnemi = 7;
	x = 4; y = 5;
	cout << "--> (" << x << "," << y << ")" << endl;
	g990->bloquer(xAmi, yAmi, x, y, xEnnemi, yEnnemi);
	cout << "--> (" << x << "," << y << ")" << endl;

	// test blocage #2
	cout << "G990 est derriere l'ami et l'ennemi" << endl;
	xAmi = 4; yAmi = 5; xEnnemi = 8; yEnnemi = 7;
	x = 2; y = 1;
	cout << "--> (" << x << "," << y << ")" << endl;
	g990->bloquer(xAmi, yAmi, x, y, xEnnemi, yEnnemi);
	cout << "--> (" << x << "," << y << ")" << endl;

	// test blocage #3
	cout << "G990 est devant l'ami et l'ennemi" << endl;
	xAmi = 1; yAmi = 2; xEnnemi = 4; yEnnemi = 4;
	x = 7; y = 8;
	cout << "--> (" << x << "," << y << ")" << endl;
	g990->bloquer(xAmi, yAmi, x, y, xEnnemi, yEnnemi);
	cout << "--> (" << x << "," << y << ")" << endl;
}

void testW000()
{
	int x = 3;
	int y = 5;
	string nom = "W000_1";
	int direction = 0;
	int force = 4;
	int vitesse = 3;
	int vision = 5;

	W000* w000 = new W000(nom, direction, force, vitesse, vision);

	cout << "NOM       : " << w000->getNom() << endl;
	w000->setDirection(-1000);
	cout << "DIRECTION : " << w000->getDirection() << endl;
	cout << "FORCE     : " << w000->getForce() << endl;
	cout << "VITESSE   : " << w000->getVitesse() << endl;
	cout << "VISION    : " << w000->getVision() << endl;

	cout << "MOUVEMENT ";
	cout << "--> (" << x << "," << y << "," << w000->getDirection() << ")" << endl;
	w000->bouger(x, y);
	cout << "--> (" << x << "," << y << "," << w000->getDirection() << ")" << endl;
	w000->setDirection(2);
	w000->bouger(x, y);
	cout << "--> (" << x << "," << y << "," << w000->getDirection() << ")" << endl;

	w000->setVitesse(10);
	// test blocage #1
	cout << "W000 est entre l'ami et l'ennemi" << endl;
	int xAmi = 2; int yAmi = 1; int xEnnemi = 8; int yEnnemi = 7;
	x = 4; y = 5;
	cout << "--> (" << x << "," << y << ")" << endl;
	w000->bloquer(xAmi, yAmi, x, y, xEnnemi, yEnnemi);
	cout << "--> (" << x << "," << y << ")" << endl;

	// test blocage #2
	cout << "W000 est derriere l'ami et l'ennemi" << endl;
	xAmi = 4; yAmi = 5; xEnnemi = 8; yEnnemi = 7;
	x = 2; y = 1;
	cout << "--> (" << x << "," << y << ")" << endl;
	w000->bloquer(xAmi, yAmi, x, y, xEnnemi, yEnnemi);
	cout << "--> (" << x << "," << y << ")" << endl;

	// test blocage #3
	cout << "W000 est devant l'ami et l'ennemi" << endl;
	xAmi = 1; yAmi = 2; xEnnemi = 5; yEnnemi = 4;
	x = 7; y = 8;
	cout << "--> (" << x << "," << y << ")" << endl;
	w000->bloquer(xAmi, yAmi, x, y, xEnnemi, yEnnemi);
	cout << "--> (" << x << "," << y << ")" << endl;
}

void testAdapters()
{
	XBot** equipeA = new XBot * [3];
	XBot** equipeB = new XBot * [3];

	X212* x212 = new X212("X 212", 3, 4, 4, 6);
	equipeA[0] = new X212Adapter(x212);
	X213* x213 = new X213("X 213", 3, 4, 4, 6);
	equipeA[1] = new X213Adapter(x213);
	X215* x215 = new X215("X 215", 3, 4, 4, 6);
	equipeA[2] = new X215Adapter(x215);
	R234* r234 = new R234(2, 2, 2, 2);
	equipeB[0] = new R234Adapter(r234);
	G990* g990 = new G990(true, true, 5, 5, 5);
	equipeB[1] = new G990Adapter(g990);
	W000* w000 = new W000("WOOO", 5, 5, 5, 5);
	equipeB[2] = new W000Adapter(w000);


	// EQUIPE A
	for (int xb = 0; xb < 3; xb++)
	{
		cout << equipeA[xb]->toString() << endl;
		int xAmi = 1; int yAmi = 2; int xEnnemi = 8; int yEnnemi = 7; int x = 4; int y = 5;
		cout << "ATTAQUER" << "--> " << equipeA[xb]->attaquer(x, y, xEnnemi, yEnnemi) << endl;
		cout << "BOUGER" << endl;
		cout << "--> (" << x << "," << y << ")" << endl;
		equipeA[xb]->bouger(xAmi, yAmi, x, y, xEnnemi, yEnnemi);
		cout << "--> (" << x << "," << y << ")" << endl;
		cout << "DEFENDRE" << endl;
		cout << "--> Est fonctionnel (" << equipeA[xb]->estFonctionnel() << ")" << endl;
		equipeA[xb]->defendre(3);
		cout << "--> Est fonctionnel (" << equipeA[xb]->estFonctionnel() << ")" << endl;
		equipeA[xb]->defendre(1000);
		cout << "--> Est fonctionnel (" << equipeA[xb]->estFonctionnel() << ")" << endl;
		cout << endl;
	}

	// EQUIPE B
	for (int xb = 0; xb < 3; xb++)
	{
		cout << equipeB[xb]->toString() << endl;
		int xAmi = 1; int yAmi = 2; int xEnnemi = 8; int yEnnemi = 7; int x = 4; int y = 5;
		cout << "ATTAQUER" << "--> " << equipeB[xb]->attaquer(x, y, xEnnemi, yEnnemi) << endl;
		cout << "BOUGER" << endl;
		cout << "--> (" << x << "," << y << ")" << endl;
		equipeB[xb]->bouger(xAmi, yAmi, x, y, xEnnemi, yEnnemi);
		cout << "--> (" << x << "," << y << ")" << endl;
		cout << "DEFENDRE" << endl;
		cout << "--> Est fonctionnel (" << equipeB[xb]->estFonctionnel() << ")" << endl;
		equipeB[xb]->defendre(3);
		cout << "--> Est fonctionnel (" << equipeB[xb]->estFonctionnel() << ")" << endl;
		equipeB[xb]->defendre(1000);
		cout << "--> Est fonctionnel (" << equipeB[xb]->estFonctionnel() << ")" << endl;
		cout << endl;
	}
}

void testManufacture()
{
	XBot** equipeA = new XBot*[3];
	XBot** equipeB = new XBot*[3];

	XBotManufacture xbotManufacture;
	equipeA[0] = xbotManufacture.creerXBot("X212");
	equipeA[1] = xbotManufacture.creerXBot("X213");
	equipeA[2] = xbotManufacture.creerXBot("X215");
	equipeB[0] = xbotManufacture.creerXBot("R234");
	equipeB[1] = xbotManufacture.creerXBot("G990");
	equipeB[2] = xbotManufacture.creerXBot("W000");

	for (int x = 0; x < 3; x++) {
		cout << equipeA[x]->toString() << endl;
		cout << equipeB[x]->toString() << endl;
	}

}

int main()
{
	//testX212();
	//testX213();
	//testX215();
	//testR234();
	//testG990();
	//testW000();

	//testAdapters();
	//testManufacture();

	XBotManufacture xbotManufacture;

	Arene arene;
	arene.setEquipes(xbotManufacture.creerEquipeXBot(), xbotManufacture.creerEquipeXBot());
	arene.debuterCombat();

	cin.get();
}*/