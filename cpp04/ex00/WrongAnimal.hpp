#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string _type);
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal &operator = (const WrongAnimal &assign);
        ~WrongAnimal();

        std::string getType() const;
        void makeSound() const;
};

#endif