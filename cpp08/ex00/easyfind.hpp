#pragma once
#include <iostream>
#include <algorithm>
#include <exception>


class notfound : public std::exception
{
    public:
        const char *what() const throw()
        {
            return ("*NOT FOUND*");
        }
};



int easyfind(T ints, int in)
{
    notfound not_found;
    if (std::find(ints.begin() , ints.end(), in) !=  ints.end())
        return (in);
    throw not_found;
}



