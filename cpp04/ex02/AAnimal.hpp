#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(std::string _type);
        AAnimal(const AAnimal &copy);
        AAnimal &operator = (const AAnimal &assign);
        virtual ~AAnimal();

        std::string getType() const;
        virtual void makeSound() const = 0;
};

#endif