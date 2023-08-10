#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <cstdlib>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string _type);
        Animal(const Animal &copy);
        Animal &operator = (const Animal &assign);
        virtual ~Animal();

        std::string getType() const;
        virtual void makeSound() const;
};

#endif