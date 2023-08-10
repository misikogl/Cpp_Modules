#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{		
	private:
		
	public:
		ScavTrap();
		ScavTrap(std::string mame);
		ScavTrap(const ScavTrap &copy);
		ScavTrap & operator=(const ScavTrap &assign);
		~ScavTrap();

		void attack(const std::string &target);
		void guardGate();
};

#endif