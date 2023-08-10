#include "AAnimal.hpp"

AAnimal::AAnimal(): type("AAnimal")
{
    std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(std::string _type): type(_type)
{
    std::cout << "AAnimal " << _type << " constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
    *this = copy;
}

AAnimal &AAnimal::operator = (const AAnimal &assign)
{
    this->type = assign.type;
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

void AAnimal::makeSound() const
{
    std::cout << "the AAnimal Sound" << std::endl;
}

std::string AAnimal::getType() const
{
    return type;
}