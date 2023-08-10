#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap constructor called" << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(std::string _name): ClapTrap(_name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout << "Fragtrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &assign)
{
	this->name = assign.name;
	this->hitPoints = assign.hitPoints;
	this->energyPoints = assign.energyPoints;
	this->attackDamage = assign.attackDamage;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Fragtrap " << name << " wanna high fives!" << std::endl;
}
