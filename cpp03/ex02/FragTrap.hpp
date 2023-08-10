#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    private:

    public:
		FragTrap();
		FragTrap(std::string _name);
		FragTrap(const FragTrap &copy);		
		FragTrap &operator = (const FragTrap &assign);
		~FragTrap();

        void highFivesGuys(void);
};

#endif