

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
        int getRawBits( void ) const;
        void setRawBits( int const raw );

        Fixed& operator= (const Fixed &fixed);
        // Fixed& operator= (const Fixed &fixed);
        bool operator==(const Fixed& fixed);
        bool operator!=(const Fixed& fixed);
        bool operator< (const Fixed& fixed);
        bool operator> (const Fixed& fixed);
        bool operator<=(const Fixed& fixed);
        bool operator>=(const Fixed& fixed);
        
        // arithmetic operators
        Fixed operator+ (const Fixed& fixed);
        Fixed operator- (const Fixed& fixed);
        Fixed operator* (const Fixed& f);
        Fixed operator/ (const Fixed& fixed);
        
        // increment/decrement 
        // postfix
        Fixed operator--(int );
        Fixed operator++(int );

        // prefix
        Fixed& operator--();
        Fixed& operator++();


        //----------
        static const Fixed&  min(const Fixed &F,const Fixed &FF);
        static  Fixed&  min( Fixed &F, Fixed &FF);

        static const Fixed&  max(const Fixed &F,const Fixed &FF);
        static  Fixed&  max( Fixed &F, Fixed &FF);


};

std::ostream& operator<<(std::ostream& os, const Fixed& dt);