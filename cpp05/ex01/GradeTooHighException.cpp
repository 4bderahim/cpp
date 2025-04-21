#include "GradeTooHighException.hpp"

// GradeTooHighException::GradeTooHighException()
// {
//     //
// }

const char *GradeTooHighException::what() const throw()
{
    return ("*GradeTooHigh*");
}