#include "Fixed.hpp"




Fixed::Fixed(const Fixed &fixed)
{
    this = fixed;
}
Fixed::Fixed()
{
    this->integer = 0;
}
void Fixed::setRawBits( int const raw )
{
    integer = frac;
}

int Fixed::getRawBits( void ) const
{
    return (this->integer);
}
