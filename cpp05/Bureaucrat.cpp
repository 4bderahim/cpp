#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name,  int grade) :name (name)
{
    if (grade  < 1)
        throw low(); 
    if (grade > 150)
        throw high();
    this->grade = grade;
    std::cout << "Bureaucrat constructed!" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructed!" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bu)
{
    if (this != &bu)
    {
        this->grade = bu.grade;
        // this->name = bu.name;
    }
    return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &bu)
{
    *this =  bu;
}

std::string Bureaucrat::getName()
{
    return this->name;
}

int Bureaucrat::getGrade()
{
    return this->grade;
}
