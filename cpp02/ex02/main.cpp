#include "Fixed.hpp"

int main(void)
{
    // // arithmetic operators
    // Fixed const z(Fixed(5.05f) * Fixed(2));
    // Fixed const c(Fixed(5.05f) / Fixed(2));
    // Fixed const d(Fixed(5.05f) - Fixed(2));
    // Fixed const e(Fixed(5.05f) + Fixed(2));

    // std::cout << z << std::endl;
    // std::cout << c << std::endl;
    // std::cout << d << std::endl;
    // std::cout << e << std::endl;
    // // arithmetic operators
    
    // //comparison operators
    // Fixed a(5.05f);
    // Fixed b(10);

    // if (a < b)
    //     std::cout << "a is less than b" << std::endl;
    // else
    //     std::cout << "a is not less than b" << std::endl;

    // if (a > b)
    //     std::cout << "a is greater than b" << std::endl;
    // else
    //     std::cout << "a is not greater than b" << std::endl;

    // if (a <= b)
    //     std::cout << "a is less than or equal to b" << std::endl;
    // else
    //     std::cout << "a is not less than or equal to b" << std::endl;

    // if (a >= b)
    //     std::cout << "a is greater than or equal to b" << std::endl;
    // else
    //     std::cout << "a is not greater than or equal to b" << std::endl;

    // if (a == b)
    //     std::cout << "a is equal to b" << std::endl;
    // else
    //     std::cout << "a is not equal to b" << std::endl;

    // if (a != b)
    //     std::cout << "a is not equal to b" << std::endl;
    // else
    //     std::cout << "a is equal to b" << std::endl;
    // //comparison operators
        
    // //pre & post
    // Fixed x(13);
    // Fixed y(42.42f);
    // std::cout << x <<  std::endl;
    // std::cout << x++ << std::endl;
    // std::cout << x <<  std::endl;
    // std::cout << ++x << std::endl;

    // std::cout << y <<  std::endl;
    // std::cout << y-- << std::endl;
    // std::cout << y <<  std::endl;
    // std::cout << --y << std::endl;
    // //pre & post

    // //min & max
    // std::cout << Fixed::max(x, y) << std::endl;
    // std::cout << Fixed::min(z, c) << std::endl;
    // //min & max

    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    return 0;
    
}