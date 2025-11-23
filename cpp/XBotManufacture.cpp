#include "XBotManufacture.h"
#include"Compteur.h"
#include "Arene.h"
#include <random>

XBot** XBotManufacture::creerEquipeXBot() {
	XBot** equipe = new XBot * [3];
	for (int x = 0; x < 3; x++) {
		switch (hasard.recupererValeurAleatoire(0, 5)) {
		case 0: equipe[x] = creerX212(); break;
		case 1: equipe[x] = creerX213(); break;
		case 2: equipe[x] = creerX215(); break;
		case 3: equipe[x] = creerR234(); break;
		case 4: equipe[x] = creerG990(); break;
		case 5: equipe[x] = creerW000(); break;
		}
	}
	return equipe;
}

string XBotManufacture::randomRobots()
{
	const string robots[] = { "X212", "X213", "W000", "R234", "X215", "G990" };
	const int numRobots = sizeof(robots) / sizeof(string);
	return robots[rand() % numRobots];
}

X212Adapter* XBotManufacture::creerX212()
{
	X212* x212 = new X212("X212", 3, 4, 4, 4);
	return new X212Adapter(x212);
	return nullptr;
}

X213Adapter* XBotManufacture::creerX213()
{
	X213* x213 = new X213("X213", 3, 4, 4, 4);
	return new X213Adapter(x213);
	return nullptr;
}

X215Adapter* XBotManufacture::creerX215()
{
	X215* x215 = new X215("X215", 3, 4, 4, 4);
	return new X215Adapter(x215);
	return nullptr;
}

R234Adapter* XBotManufacture::creerR234()
{
	R234* r234 = new R234(2, 2, 2, 2);
	return new R234Adapter(r234);
	return nullptr;
}

W000Adapter* XBotManufacture::creerW000()
{
	W000* w000 = new W000("W000", 5, 5, 5, 5);
	return new W000Adapter(w000);
	return nullptr;
}

G990Adapter* XBotManufacture::creerG990()
{
	G990* g990 = new G990(true, true, 5, 5, 5);
	return new G990Adapter(g990);
	return nullptr;
}

XBotManufacture::XBotManufacture()
{
	Compteur::ajouterConstructeur();
}

XBotManufacture::XBotManufacture(const XBotManufacture&)
{
	Compteur::ajouterConstructeurCopie();
}

XBotManufacture::~XBotManufacture()
{
	XBot** equipe = creerEquipeXBot();
	for (int x = 0; x < 3; x++) {
		delete equipe[x];
		//delete equipe[x];
	}delete equipe;
	delete creerX212();
	delete creerX213();
	delete creerX215();
	delete creerR234();
	delete creerW000();
	delete creerG990();

	Compteur::ajouterDestructeur();
}

XBot* XBotManufacture::creerXBot(string id)
{
	if (id == "X212") return creerX212();
	if (id == "X213") return creerX213();
	if (id == "X215") return creerX215();
	if (id == "R234") return creerR234();
	if (id == "G990") return creerG990();
	if (id == "W000") return creerW000();

	return nullptr;
}

