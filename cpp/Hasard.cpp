#include "hasard.h"

void Hasard::initialisation()
{
    seed_val = GetTickCount64();
    rng.seed((long)seed_val);
}

int Hasard::recupererValeurAleatoire(int min, int max)
{
    uniform_int_distribution<uint64_t> uint_distMax(min, max);  //[min, max];
    return (int)uint_distMax(rng);
}