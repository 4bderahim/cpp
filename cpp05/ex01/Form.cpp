#include "Form.hpp"

Form::Form()
{
    std::cout << "Form constructed!" << std::endl;
}

Form::~Form()
{
    std::cout << "Form destructed!" << std::endl;
}

const int Form::getGrade()
{
    return (this->grade);
}

const int Form::getGrade_()
{
    return (this->grade_);
}

bool Form::getBool()
{
    return (this->b);
}

void Form::setBool()
{
    this->b = 1;
}

const std::string Form::getName()
{
    return (this->name);
}

void Form::beSigned(Bureaucrat &bure)
{
    if (bure.getGrade() > this->grade)
        throw bure.low;
    Form::setBool();
}




