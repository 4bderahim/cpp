#include <iostream>
#include <exception>
	

class GradeTooHighException: public std::exception
{
    public:
        GradeTooHighException();
        const char *what() const throw();
};