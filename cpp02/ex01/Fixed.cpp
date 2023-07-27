#include "Fixed.hpp"

Fixed::Fixed():value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int _value):value(_value << fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float _value):value(roundf(_value * (1 << fractionalBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator = (const Fixed &assign)
{
	value = assign.value;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float Fixed::toFloat(void) const
{
	return (float)this->value / (1 << fractionalBits);
}

int Fixed::toInt(void) const
{
	return value >> fractionalBits;
}

std::ostream &operator << (std::ostream &ostr, Fixed const &fixed)
{
	return ostr << fixed.toFloat();
}