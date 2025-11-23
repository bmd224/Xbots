#ifndef X213_H
#define X213_H

#include <string>
#include <iostream>
using namespace std;

class X213 {
public:
	int bloquer() const { return vitesse / (3 + force); }
	void mouvement(int& x, int& y);
	void superCourse(int& x, int& y);
	void tournerLesTalons();
	X213(string nom, int direction, int force, int vitesse, int vision);
	X213(const X213&);
	~X213();
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
	std::string nom;
	int direction;
	int force;
	int vitesse;
	int vision;
};

#endif