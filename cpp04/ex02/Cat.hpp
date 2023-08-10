#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat &copy);
        Cat &operator = (const Cat &assign);
        ~Cat();

        void makeSound() const;
};

#endif