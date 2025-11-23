#ifndef X213ADAPTER_H
#define X213ADAPTER_H

using namespace std;
#include <string>
#include "X213.h"
#include "XBot.h"
#include "Hasard.h"

class X213Adapter :
	public XBot {
private:
	X213* x213;
	int energie;

public:
	X213Adapter(X213* x213);
	X213Adapter(const X213Adapter&);
	virtual ~X213Adapter();
	void bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi);
	int attaquer(int x, int y, int xEnnemi, int yEnnemi);
	void defendre(int degat);
	bool estFonctionnel() const;
	string toString();
	Hasard hasard;
};

#endif