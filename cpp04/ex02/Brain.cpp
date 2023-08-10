#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Constructor Called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    for(int i = 0; i < 100; i++)
    {
        this->ideas[i] = copy.ideas[i];
    }
}

Brain::~Brain()
{
    std::cout << "Brain Destructor Called" << std::endl;
}

Brain& Brain::operator=(const Brain &assign)
{
    if (this != &assign)
    {
        for(int i = 0; i < 100; i++)
        {
            ideas[i] = assign.ideas[i];
        }
    }
    return *this;
}