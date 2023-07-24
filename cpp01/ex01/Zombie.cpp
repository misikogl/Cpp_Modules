#include "Zombie.hpp"

void Zombie::setName(std::string sName)
{
	name =  sName;
}

Zombie::Zombie()
{
}

void Zombie::announce()
{
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << " died." << std::endl;
}

void Zombie::create()
{
    std::cout << "zombie" << " "<< name << " created" << std::endl;
}