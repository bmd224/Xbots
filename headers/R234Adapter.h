#ifndef R234ADAPTER_H
#define R234ADAPTER_H

using namespace std;
#include <string>
#include "R234.h"
#include "XBot.h"
#include "Hasard.h"

class R234Adapter :
	public XBot {
private:
	R234* r234;
	int energie;

public:
	R234Adapter(R234* r234);
	R234Adapter(const R234Adapter&);
	virtual ~R234Adapter();
	void bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi);
	int attaquer(int x, int y, int xEnnemi, int yEnnemi);
	void defendre(int degat);
	bool estFonctionnel() const;
	string toString();
	Hasard hasard;
};

#endif