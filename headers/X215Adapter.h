#ifndef X215ADAPTER_H
#define X215ADAPTER_H

using namespace std;
#include <string>
#include "X215.h"
#include "XBot.h"
#include "Hasard.h"

class X215Adapter :
	public XBot {
private:
	X215* x215;
	int energie;

public:
	X215Adapter(X215* x215);
	X215Adapter(const X215Adapter&);
	virtual ~X215Adapter();
	void bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi);
	int attaquer(int x, int y, int xEnnemi, int yEnnemi);
	void defendre(int degat);
	bool estFonctionnel() const;
	string toString();
	Hasard hasard;
};

#endif