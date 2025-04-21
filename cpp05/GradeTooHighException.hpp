#include <iostream>
#include <exception>
	

class radeTooHighException: public std::exception
{
    const char *what();
};