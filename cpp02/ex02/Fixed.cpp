#include "Fixed.hpp"

Fixed::Fixed():value(0)
{

}

Fixed::Fixed(const int _value):value(_value << fractionalBits)
{

}

Fixed::Fixed(const float _value):value(roundf(_value * (1 << fractionalBits)))
{
	
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed &Fixed::operator = (const Fixed &assign)
{
	value = assign.value;
	return *this;
}

Fixed::~Fixed()
{
	
}

int Fixed::getRawBits() const
{
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

bool Fixed::operator < (const Fixed &other) const
{
	return this->value < other.value;
}

bool Fixed::operator > (const Fixed &other) const
{
	return this->value > other.value;
}

bool Fixed::operator >= (const Fixed &other) const
{
	return this->value >= other.value;
}

bool Fixed::operator <= (const Fixed &other) const
{
	return this->value <= other.value;
}

bool Fixed::operator == (const Fixed &other) const
{
	return this->value == other.value;
}

bool Fixed::operator != (const Fixed &other) const
{
	return this->value != other.value;
}

Fixed Fixed::operator + (const Fixed &other) const
{
	return Fixed(this->toInt() + other.toInt());
}

Fixed Fixed::operator - (const Fixed &other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator * (const Fixed &other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator / (const Fixed &other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed &Fixed::operator ++ () 
{
	this->value++;
	return *this;
}

Fixed Fixed::operator ++ (int)
{
	Fixed old = *this;
	operator++();
	return old;
}

Fixed &Fixed::operator -- () 
{
	this->value--;
	return *this;
}

Fixed Fixed::operator -- (int)
{
	Fixed old = *this;
	operator--();
	return old;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return a.value <= b.value ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return a.value <= b.value ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return a.value >= b.value ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return a.value >= b.value ? a : b;
}
