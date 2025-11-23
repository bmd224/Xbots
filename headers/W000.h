#ifndef W000_H
#define W000_H

#include <string>
using namespace std;

class W000 {
private:
	std::string nom;
	int direction;
	int force;
	int vitesse;
	int vision;

public:
	void bloquer(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi);
	void bouger(int& x, int& y);
	W000(string nom, int direction, int force, int vitesse, int vision);
	W000(const W000&);
	~W000();
	void setNom(string nom) {}
	std::string getNom() const { return nom; }
	void setDirection(int direction);
	int getDirection() const { return direction; }
	void setForce(int force) { this->force = force; }
	int getForce() const { return force; }
	void setVitesse(int vitesse) { this->vitesse = vitesse; }
	int getVitesse() const { return vitesse; }
	void setVision(int vision) { this->vision = vision; }
	int getVision() const { return vision; }
};

#endif