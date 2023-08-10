#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "Scavtrap constructor called" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(std::string _name): ClapTrap(_name)
{
	std::cout << "Scavtrap constructor called" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavttap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &assign)
{
	this->name = assign.name;
	this->hitPoints = assign.hitPoints;
	this->energyPoints = assign.energyPoints;
	this->attackDamage = assign.attackDamage;
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (energyPoints < 1)
	{
		std::cout << "Not enough energy to attack" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "Scavtrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "Scavtrap " << name << " is now in Gatekeeper mode" << std::endl;
}
