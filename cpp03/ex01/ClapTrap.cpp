#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "Thor";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "Claptrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string _name)
{
	name = _name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "Claptrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &assign)
{
	this->name = assign.name;
	this->hitPoints = assign.hitPoints;
	this->energyPoints = assign.energyPoints;
	this->attackDamage = assign.attackDamage;
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (energyPoints < 1)
	{
		std::cout << "Not enough energy to attack" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "Claptrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > hitPoints)
		hitPoints = 0;
	else
	{
		hitPoints -= amount;
	}
	std::cout << "Claptrap " << name << " takes " << amount << " points of damage, current hit points: " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	hitPoints += amount;
	if (energyPoints < 1)
	{
		std::cout << "Not enough energy to repair" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "Claptrap " << name << " repaired " << amount << " points, current hit points: " << hitPoints << std::endl;
}
