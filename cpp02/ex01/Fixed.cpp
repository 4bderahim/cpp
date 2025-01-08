
#include "Fixed.hpp"

Fixed& Fixed::operator= (const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (&fixed != this)
        this->integer = fixed.getRawBits();
    return (*this);
}

Fixed::Fixed(const int integer )
{
    this->integer = integer * 256;
}

Fixed::Fixed(const float num )
{
    this->integer = num * 256;
}

int Fixed::toInt( void ) const
{
    return (this->integer / 256);
}

float Fixed::toFloat(void) const
{

    return float( float(this->integer) / 256);
}

Fixed::~Fixed()
{
    std::cout << "destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat() ;
    return (os);
}

Fixed::Fixed()
      :integer (0)
{
    std::cout << "default constructor called !" << std::endl;
}

void Fixed::setRawBits( int const raw )
{
    this->integer = raw ;
    std::cout << "setRawBits member function called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->integer);
}
