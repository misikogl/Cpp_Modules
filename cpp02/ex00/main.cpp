#include "Fixed.hpp"

int main()
{
    Fixed a;
    Fixed b(a);
    Fixed c;
    // Fixed d;

    c = b;

    // d.setRawBits(13);
    // std::cout << d.getRawBits() << std::endl;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return (0);
}