

#include "Point.hpp"




float area(Point a, Point b, Point c)
{
   return abs((a.getx().toFloat() *(b.gety().toFloat()-c.gety().toFloat()) 
            + b.getx().toFloat()*(c.gety().toFloat()-a.gety().toFloat())
            + c.getx().toFloat()*(a.gety().toFloat()-b.gety().toFloat()))/2.0);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float a0 = area(a,  b, c);
    float a1 = area(point, a,  b);
    float a2 = area(a,  point, c);
    float a3 = area(b,  c, point);
    
    if (a0 == (a1 + a2 + a3))
        return (true);
    return (false);
}