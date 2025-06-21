
#pragma once
#include <exception>
#include <iostream>
class index_is_out_of_bound:public std::exception
{

    public:
        const char *what() const throw()
        {
           return ("index is out of bound" );
        }
};