#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

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

        std::cout << "----------------------" << std::endl;
        FragTrap Clap;
        FragTrap clapTrap("Loki");

        Clap.attack("Loki");
        clapTrap.attack("Thor");
        Clap.takeDamage(30);
        clapTrap.takeDamage(30);
        Clap.beRepaired(4);
        clapTrap.beRepaired(2);
        clapTrap.takeDamage(10);
        clapTrap.highFivesGuys();

    return 0;
}