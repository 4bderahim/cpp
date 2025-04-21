#include <iostream>
#include <exception>
	

class GradeTooHighException: public std::exception
{
    const char *what() const throw();
};