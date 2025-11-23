#ifndef XBOT_H
#define XBOT_H

#include <string>
using namespace std;

class XBot {
public:
	XBot();
	XBot(const XBot& xbot);
	virtual ~XBot();
	virtual void bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi) = 0;
	virtual int attaquer(int x, int y, int xEnnemi, int yEnnemi) = 0;
	virtual void defendre(int degat) = 0;
	virtual bool estFonctionnel() const = 0;
	virtual string toString() = 0;

	// Nouvelle fonction pour ne pas sortir du tableau
	void validerMouvement(int& x, int& y);
};

#endif 