#include <iostream>
#include <exception>
	
class GradeTooLowException: public std::exception
{
    const char *what() const throw();
};