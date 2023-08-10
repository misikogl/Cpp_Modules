#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constuctor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal (copy)
{
    std::cout << "WrongCat copy called" << std::endl;
    *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &assign)
{
    std::cout << "WrongCat assigment operator called" << std::endl;
    this->type = assign.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Meoow! Meooowwwww!" << std::endl;
}