#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string _type): type(_type)
{
    std::cout << "WrongAnimal " << _type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "WrongAnimal Copy Called" << std::endl;
    type = copy.type;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &assign)
{
    std::cout << "WrongAnimal Copy assigment operator called" << std::endl;
    this->type = assign.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "the WrongAnimal Sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}