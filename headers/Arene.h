#pragma once

#include "XBot.h"
#include "Hasard.h"

class Arene
{
public:
	static constexpr int TAILLE = 10;
	static constexpr int NOMBRE_XBOT = 10;

	Arene();
	Arene(const Arene& arene) = delete;
	~Arene();

	void setEquipes(XBot** equipeA, XBot** equipeB);
	void debuterCombat();

private:
	static constexpr int EQUIPE_A = 0;
	static constexpr int EQUIPE_B = 1;

	class Combattant
	{
	public:
		Combattant(XBot* xbot, int x, int y, char id)
		{
			this->xbot = xbot;
			this->x = x;
			this->y = y;
			this->id = id;
		}
		int x;
		int y;
		char id;
		XBot* xbot;

		friend ostream& operator<<(ostream& os, const Combattant& combattant)
		{
			os << "{id:" << combattant.id << "/x:" << combattant.x << "/y:" << combattant.y
				<< "/xbot:" << combattant.xbot->toString() << "}";
			return os;
		}

	};

	Combattant*** combattants;
	Hasard hasard;

	bool minimumFonctionnel(Combattant** equipe) const;
	void tourCombat(Combattant** attaquants, Combattant** defenseurs);
	int getVivant(Combattant** equipe, int moi) const;
	void setCoordonneesAleatoire(int& x, int& y);
	bool verifierDisponibiliteCoordonnees(int x, int y) const;
	void afficherCombattants() const;
	friend ostream& operator<<(ostream& os, const Arene& arene);
};