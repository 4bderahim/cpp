

#include "Fixed.hpp"



class Point 
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(const float x, const float y);
        ~Point();
        Point(const Point &point);
        Point& operator =(const Point &point) const; 

        const Fixed& getx();
        const Fixed& gety();
};