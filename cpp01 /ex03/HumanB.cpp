#include "HumanB.hpp"

HumanB::HumanB(std::string name_)
{
    name = name_;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
    weapon = &newWeapon;
}

void HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}