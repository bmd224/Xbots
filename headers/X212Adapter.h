#ifndef X212ADAPTER_H
#define X212ADAPTER_H

#include <string>
#include "X212.h"
#include "XBot.h"
#include "Hasard.h"

using namespace std;

class X212Adapter :
	public XBot {
private:
	X212* x212;
	int energie;

public:
	X212Adapter(X212* x212);
	X212Adapter(const X212Adapter&);
	virtual ~X212Adapter();
	void bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi);
	int attaquer(int x, int y, int xEnnemi, int yEnnemi);
	void defendre(int degat);
	bool estFonctionnel() const;
	string toString();
	Hasard hasard;
};

#endif