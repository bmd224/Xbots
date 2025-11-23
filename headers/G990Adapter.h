#ifndef G990ADAPTER_H
#define G990ADAPTER_H

using namespace std;
#include <string>
#include "G990.h"
#include "XBot.h"

class G990Adapter :
	public XBot {

private:
	G990* g990;
	int energie;

public:
	G990Adapter(G990* g990);
	G990Adapter(const G990Adapter&);
	virtual ~G990Adapter();
	void bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi);
	int attaquer(int x, int y, int xEnnemi, int yEnnemi);
	void defendre(int degat);
	bool estFonctionnel() const;
	string toString();
	//Hasard hasard;
};

#endif