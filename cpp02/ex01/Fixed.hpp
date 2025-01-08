

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
        int toInt( void ) const;
        Fixed& operator= (const Fixed &fixed);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& os, const Fixed& dt);