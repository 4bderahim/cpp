

#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int integer;
        static const int value;
    public:
        Fixed(); 
        Fixed(const int integer ); 
        Fixed(const float number ); 
        float toFloat(void) const;
        ~Fixed();
        Fixed(const Fixed &obj);
        int toInt( void ) const  ;
        int getRawBits( void ) const;
        void setRawBits( int const raw )     ;
        Fixed& operator= (const Fixed &fixed);
};
std::ostream& operator<<(std::ostream& os, const Fixed& dt);
