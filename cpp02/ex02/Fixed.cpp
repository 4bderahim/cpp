
#include "Fixed.hpp"

Fixed& Fixed::operator= (const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (&fixed != this)
        this->integer = fixed.integer;
    return (*this);
}



bool Fixed::operator==( const Fixed& fixed) 
{
    return ( (this->integer == fixed.integer ));
    // if (this->integer == rhs.integer )
    //     return (true);
    // return (false);
}
bool Fixed::operator!=(const Fixed& fixed) 
{
     return ( (this->integer != fixed.integer ));
}
bool Fixed::operator< ( const Fixed& fixed) 
{
     return ( (this->integer < fixed.integer ));
}

bool Fixed::operator> ( const Fixed& fixed) 
{
     return ( (this->integer > fixed.integer )); 
}

bool Fixed::operator<=( const Fixed& fixed) 
{
     return ( (this->integer <= fixed.integer ));
}

bool Fixed::operator>=( const Fixed& fixed) 
{
     return ( (this->integer >= fixed.integer ));
}

// ----------------------------------------------------------------------
Fixed Fixed::operator+(const Fixed& fixed)
{
    Fixed result;
    result =  *this;
    result.integer +=  fixed.integer;
    return (result);
}

Fixed Fixed::operator-(const Fixed& fixed)
{
    Fixed result;
    result =  *this;
    result.integer -=  fixed.integer;
    return (result);
}

Fixed Fixed::operator*(const Fixed& fixed)
{
    Fixed result;

    result =  *this;
    // std::cout << (float)result.integer/256 << "|#$||" << fixed.integer/256 << std::endl;
    
    result.integer = result.toFloat() * fixed.toFloat() ;
    return (result);
}

Fixed Fixed::operator/(const Fixed& fixed)
{
    Fixed result;
    result = *this;
    result.integer /= fixed.integer;
    return (result);
}
// ----------------------------------------------------------------------

Fixed Fixed::operator++(int)
{
    Fixed result;
    result =  *this;
    this->integer++;
    return (result);
}

Fixed Fixed::operator--(int)
{
    Fixed result;
    result =  *this;
    this->integer--;
    return (result);
}

Fixed& Fixed::operator++()
{
    this->integer++;
    return (*this);
}

Fixed& Fixed::operator--()
{
    this->integer--;
    return (*this);
}








Fixed::Fixed()
    :integer (0)
{
    std::cout << "default constructor called !" << std::endl;
}
Fixed::Fixed(const int integer )
{
    std::cout << "Int constructor called" << std::endl;
    this->integer = integer * 256;
}

Fixed::Fixed(const float num )
{
    std::cout << "Float constructor called" << std::endl;
    this->integer = roundf(num * 256);
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