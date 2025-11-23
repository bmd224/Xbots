#include<string>
#ifndef COMPTEUR_H
#define COMPTEUR_H
class Compteur {
public:
	Compteur();
	Compteur(const Compteur&);
	~Compteur();
	static void ajouterConstructeur();
	static void ajouterConstructeurCopie();
	static void ajouterDestructeur();
	static int getNbreConstructeurs();
	static int getNbreConstructeursCopie();
	static int getNbreDestructeurs();
private:
	static int constructeur;
	static int constructeurCopie;
	static int destructeur;
};
#endif 