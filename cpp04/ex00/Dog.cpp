#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
    std::cout << "Dog constuctor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal (copy)
{
    std::cout << "Dog copy called" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog &assign)
{
    std::cout << "Copy Constructor called" << std::endl;
    this->type = assign.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "WUFF WUFFF!" << std::endl;
}