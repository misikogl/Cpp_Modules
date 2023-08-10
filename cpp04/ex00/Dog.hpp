#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &copy);
        Dog &operator = (const Dog &assign);
        ~Dog();

        void makeSound() const;
};

#endif