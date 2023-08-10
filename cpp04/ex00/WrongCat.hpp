#ifndef WrongCat_HPP
#define WrongCat_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(std::string name);
        WrongCat(const WrongCat &copy);
        WrongCat &operator = (const WrongCat &assign);
        ~WrongCat();

        void makeSound() const;
};

#endif