#include "HumanA.hpp"

HumanA::HumanA(std::string name_,Weapon &newWeapon) : weapon(newWeapon)
{
    name = name_;
}

void HumanA::attack()
{
    std::cout << name << " attack with their " << weapon.getType() << std::endl;
}