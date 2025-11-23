#ifndef X215_H
#define X215_H

#include <string>

using namespace std;

class X215 {
public:
	int bloquer();
	void mouvement(int& x, int& y);
	void superCourse(int& x, int& y);
	void esquive(int& x, int& y, int& xDanger, int& yDanger);
	void tournerLesTalons();
	void exploserRage();
	void controlerRage();
	X215(string nom, int direction, int force, int vitesse, int vision);
	X215(const X215&);
	~X215();
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
	void setRageCombat(bool rageCombat);
	bool getRageCombat() const { return rageCombat; }

private:
	std::string nom;
	int direction;
	int force;
	int vitesse;
	int vision;
	bool rageCombat;
};

#endif