#ifndef XBOTMANUFACTURE_H
#define XBOTMANUFACTURE_H

using namespace std;
#include <string>
#include"X215Adapter.h"
#include"G990Adapter.h"
#include"R234Adapter.h"
#include "W000Adapter.h"
#include"X212Adapter.h"
#include"X213Adapter.h"
#include "XBot.h"

class XBotManufacture {
private:
	X212Adapter* creerX212();
	X213Adapter* creerX213();
	X215Adapter* creerX215();
	R234Adapter* creerR234();
	W000Adapter* creerW000();
	G990Adapter* creerG990();
	Hasard hasard;

public:
	XBotManufacture();
	XBotManufacture(const XBotManufacture&);
	~XBotManufacture();
	XBot* creerXBot(string id);
	XBot** creerEquipeXBot();

	// Nouvelle fonction pour le random
	string randomRobots();
};

#endif 


