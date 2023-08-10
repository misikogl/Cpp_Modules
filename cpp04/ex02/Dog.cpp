#include "Dog.hpp"

Dog::Dog(): AAnimal("Dog")
{
    std::cout << "Dog constuctor called" << std::endl;
    brain = new Brain();
}

Dog::Dog(const Dog &copy)
{
    brain = new Brain();
    *this = copy;
}

Dog &Dog::operator=(const Dog &assign)
{ 
    this->type = assign.type;
    return *this;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "WUFF WUFFF!" << std::endl;
}