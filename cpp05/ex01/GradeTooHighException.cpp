#include "GradeTooHighException.hpp"

const char *GradeTooHighException::what() const throw()
{
    return ("*GradeTooHigh*");
}