


#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int integer;
        static const int frac;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &obj);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};
