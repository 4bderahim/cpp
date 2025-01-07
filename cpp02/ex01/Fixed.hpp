

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
        ~Fixed();
        Fixed(const Fixed &obj);
        Fixed& operator= (const Fixed &fixed);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};
