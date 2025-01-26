

#include "Point.hpp"




float area(float x1, float y1, float x2,  float y2,  float x3,  float y3)
{
   return abs((x1.getx().toFloat() *(y2.gety().toFloat()-y3.gety().toFloat()) 
            + x2.getx().toFloat()*(y3.gety().toFloat()-y1.gety().toFloat())
            + x3.getx().toFloat()*(y1.gety().toFloat()-y2.gety().toFloat()))/2.0);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    //
    float a = area(a,  b,  c, point);
    // float a1 = area();
    // float a2 = area();
    // float a3 = area();
    // float a4 = area();
}