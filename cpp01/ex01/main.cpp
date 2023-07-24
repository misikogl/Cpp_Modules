#include "Zombie.hpp"

int main()
{
    int i = 10;
    Zombie *zomb = zombieHorde(i, "muhammed");

    for(int j = 0; j < i; j++)
    {
        zomb[j].create();
    }
    for(int j = 0; j < i; j++)
    {
        zomb[j].announce();
    }
    delete []zomb;
}