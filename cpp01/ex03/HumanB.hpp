#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB 
{
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanB(std::string);
        void setWeapon(Weapon&); //&'ın sağda olması Weapon tipinde bir referans demektir. Eğer solda olsa adresini  verir.
        void attack();
};

#endif