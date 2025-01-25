#include "Point.cpp"



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


Fixed& Fixed::operator= (const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (&fixed != this)
        this->integer = fixed.integer;
    return (*this);
}

int main()
{

    return (1);
}