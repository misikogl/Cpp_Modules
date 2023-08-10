#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    {
        std::cout << "----------------------" << std::endl;
        ClapTrap Clap;
        ClapTrap clapTrap("Loki");

        Clap.attack("Loki");
        clapTrap.attack("Thor");
        Clap.takeDamage(3);
        clapTrap.takeDamage(5);
        Clap.beRepaired(3);
        clapTrap.beRepaired(2);
        clapTrap.takeDamage(10);
    }


    {
        std::cout << "----------------------" << std::endl;
        ScavTrap Clap;
        ScavTrap clapTrap("Loki");

        Clap.attack("Loki");
        clapTrap.attack("Thor");
        Clap.takeDamage(20);
        clapTrap.takeDamage(20);
        Clap.beRepaired(4);
        clapTrap.beRepaired(2);
        clapTrap.takeDamage(100);
        clapTrap.guardGate();
    }

    return 0;
}