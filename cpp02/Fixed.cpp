#include "Fixed.hpp"


Fixed::~Fixed()
{
    std::cout << "destructor was called " << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}
Fixed::Fixed()
:integer {0}
{
    std::cout << "default constructor was called" << std::endl;
}
void Fixed::setRawBits( int const raw )
{
    integer = frac;
}

int Fixed::getRawBits( void ) const
{
    return (this->integer);
}
