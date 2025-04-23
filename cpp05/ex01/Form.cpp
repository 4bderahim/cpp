#include "Form.hpp"

Form::Form(int gr, int gr_): grade (gr), grade_(gr_)
{
    // throw
    std::cout << "Form constructed!" << std::endl;
}

Form::Form(): b(0),  grade (1), grade_(1)
{
    std::cout << "Form constructed!" << std::endl;
}

Form::~Form()
{
    std::cout << "Form destructed!" << std::endl;
}

int Form::getGrade()
{
    return (this->grade);
}

int Form::getGrade_()
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
    if (bure.getGrade() > Form::grade)
        throw bure.low;
    this->b = 1;
}




