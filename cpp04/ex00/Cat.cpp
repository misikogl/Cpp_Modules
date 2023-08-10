#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
    std::cout << "Cat constuctor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
    std::cout << "Cat copy called" << std::endl;
    type = copy.type;
}

Cat &Cat::operator=(const Cat &assign)
{
    std::cout << "Copy assigment operator called" << std::endl;
    this->type = assign.type;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meoow! Meooowwwww!" << std::endl;
}