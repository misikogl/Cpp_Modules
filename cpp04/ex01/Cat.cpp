#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
    std::cout << "Cat constuctor called" << std::endl;
    brain = new Brain();
}

Cat::Cat(const Cat &copy)
{
    brain = new Brain();
    *this = copy;
}

Cat &Cat::operator=(const Cat &assign)
{
    
    this->type = assign.type;
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meoow! Meooowwwww!" << std::endl;
}