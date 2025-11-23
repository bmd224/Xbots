#ifndef W000ADAPTER_H
#define W000ADAPTER_H

using namespace std;
#include <string>
#include "W000.h"
#include "XBot.h"
#include "Compteur.h"

class W000Adapter :
	public XBot {
private:
	W000* w000;
	int  energie;

public:
	W000Adapter(W000* w000);
	W000Adapter(const W000Adapter&);
	virtual ~W000Adapter();
	void bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi);
	int attaquer(int x, int y, int xEnnemi, int yEnnemi);
	void defendre(int degat);
	bool estFonctionnel() const;
	string toString();
	//Hasard hasard;
};

#endif