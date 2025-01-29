#include "Point.hpp"


Point::Point(const float x, const float y)
    : x(x), y(y)
{
    
    // std::cout << "constructed!" << std::endl;
}

Point::Point()
{
    // std::cout << "constructed!" << std::endl;
}

Point::~Point()
{
    // std::cout << "destructed!" << std::endl;
}

Point::Point(const Point &point)
    : x (point.x), y (point.y)
{
    *this = point;
    // std::cout << "copy constructor called!" << std::endl;
}

Point& Point::operator= (const Point &point)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (&point != this)
        {
            x  = point.x;
            y  = point.y;
        }
    return (*this);
}

const Fixed& Point::getx()
{
    return (this->x );
}

const Fixed& Point::gety()
{
    return (this->y);
}