#include "Zombie.hpp"

int main()
{
    Zombie Zombie1 = Zombie("Foo");
    Zombie1.announce();

    Zombie *zombie = newZombie("Hoo");
    zombie->announce();

    randomChump("Koo");
    delete zombie;
}
