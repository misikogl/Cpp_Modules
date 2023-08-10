#include "ClapTrap.hpp"

int main()
{
    ClapTrap Clap;
    ClapTrap clapTrap("Loki");

    Clap.attack("Loki");
    clapTrap.attack("Thor");
    Clap.takeDamage(3);
    clapTrap.takeDamage(5);
    Clap.beRepaired(3);
    clapTrap.beRepaired(2);
    clapTrap.takeDamage(10);


    return 0;
}