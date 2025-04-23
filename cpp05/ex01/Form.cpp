#include "Form.hpp"



Form::Form(int grade, int grade_): b (0), grade (grade), grade_ (grade_) 
{
    std::cout << "Form constructed!" << std::endl;
}

Form::Form(): b (0)
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
    if (bure.getGrade() > Form::grade)
        throw bure.low;
    this->b = 1;
}




