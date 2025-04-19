
#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(int grade) :grade (grade)
{
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


