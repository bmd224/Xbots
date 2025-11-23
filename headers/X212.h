#ifndef X212_H
#define X212_H

#include <string>
using namespace std;

class X212 {
public:
	int bloquer() const { return vitesse / (3 + force); }
	void mouvement(int& x, int& y);
	void superCourse(int& x, int& y);
	void esquive(int& x, int& y, int& xDanger, int& yDanger);
	X212(string nom, int direction, int force, int vitesse, int vision);
	X212(const X212&);
	~X212();
	void setNom(std::string nom) {}
	std::string getNom() const { return nom; }
	void setDirection(int direction);
	int getDirection() const { return direction; }
	void setForce(int force) {}
	int getForce() const { return force; }
	void setVitesse(int vitesse) {}
	int getVitesse() const { return vitesse; }
	void setVision(int vision) {}
	int getVision() const { return vision; }

private:
	string nom;
	int direction;
	int force;
	int vitesse;
	int vision;

};

#endif