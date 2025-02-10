

#pragma once
#include "Fixed.hpp"

class Point 
{
    private:
        Fixed x;
        Fixed y;
    public:
        Point();
        Point(const float x, const float y);
        ~Point();
        Point(const Point &point);
        Point& operator =(const Point &point) ; 

        const Fixed& getx();
        const Fixed& gety();
};
bool bsp( Point const a, Point const b, Point const c, Point const point);
