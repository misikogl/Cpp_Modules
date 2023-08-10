#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
        // std::cout << std::endl; 
        // Dog basic;
        // {
        // Dog tmp = basic;
        // }   
        // std::cout << std::endl;
    {
        Animal *an[4];
        for (size_t i = 0; i < 4; i++)
        {
            if (i % 2 == 0)
                an[i] = new Cat();
            else
                an[i] = new Dog();
        }
        for (size_t i = 0; i < 4; i++)
        {
            delete an[i];
        }
    }
    return 0;

}