#include "Point.hpp"



Point::Point(const float x, const float y)
    : x(0), y(0)
{
    
    std::cout << "constructed!" << std::endl;
}

Point::Point()
{
    std::cout << "constructed!" << std::endl;
}

Point::~Point()
{
    std::cout << "destructed!" << std::endl;
}

Point::Point(const Point &point)
{
    *this = point;
    std::cout << "copy constructor called!" << std::endl;
}

Point& Point::operator= (const Point &point)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (&point != this)
        {
            this->x {point.x};
            this->y {point.y};
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

// int main()
// {

//     return (1);
// }