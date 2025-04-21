#include "GradeTooHighException.hpp"

const char *GradeTooHighException::what()
{
    return ("*GradeTooHigh*");
}