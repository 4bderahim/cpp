
#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(int grade) 
{
    if (grade  < 1)
        throw low; 
    if (grade > 150)
        throw high;
    std::cout << "Bureaucrat constructed!" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructed!" << std::endl;
}

std::string Bureaucrat::getName()
{
    return this->name;
}

int Bureaucrat::getGrade()
{
    return this->grade;
}


