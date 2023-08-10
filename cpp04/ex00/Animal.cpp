#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string _type): type(_type)
{
    std::cout << "Animal " << _type << " constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal copy called" << std::endl;
    *this = copy;
}

Animal &Animal::operator = (const Animal &assign)
{
    std::cout << "Copy assigment operator called" << std::endl;
    this->type = assign.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "the Animal Sound" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}