#ifndef G990_H
#define G990_H

#include <string>
using namespace std;

class G990 {
private:
	bool nord;
	bool est;
	long energiePhysique;
	long energieMaximale;
	long vision;

public:
	void deplacementNordSud(int valeur, int& x, int& y);
	void deplacementEstOuest(int valeur, int& x, int& y);
	void regarderNord();
	void regarderSud();
	void regarderEst();
	void regarderOuest();
	void bloquer(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi);
	G990(bool nord, bool est, long energiePhysique, long energieMaximale, long vision);
	G990(const G990&);
	~G990();
	void setNord(bool nord);
	bool getNord() const { return nord; }
	void setEst(bool est) { this->est = est; }
	bool getEst() const { return est; }
	void setEnergiePhysique(long energiePhysique) { this->energiePhysique = energiePhysique; }
	long getEnergiePhysique() const { return energiePhysique; }
	void setEnergieMaximale(long energieMaximale) { this->energieMaximale = energieMaximale; }
	long getEnergieMaximale() const { return energieMaximale; }
	void setVision(long vision) { this->vision = vision; }
	long getVision() const { return vision; }
};

#endif