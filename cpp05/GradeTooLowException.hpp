#include <iostream>
#include <exception>
	

class radeTooLowException: public std::exception
{
    const char *what();

};