#pragma once

#include <iostream>
#include <random>
#include <windows.h>
#include "Compteur.h"

using namespace std;

class Hasard
{
public:
	Hasard() { initialisation(); }
	int recupererValeurAleatoire(int min, int max);

private:
	void initialisation();
	typedef std::mt19937 MyRNG;
	uint64_t seed_val;
	MyRNG rng;
};