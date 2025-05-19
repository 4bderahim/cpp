#include "Form.hpp"

Form::Form(int gr, int gr_): grade (gr), grade_(gr_)
{
    if (gr  < 1)
        throw Form::low;
    if (gr > 150)
        throw Form::high;
    std::cout << "Form constructed!" << std::endl;
}

Form::Form():name("name"),  b(0),  grade (1), grade_(1) 
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

Form& Form::operator=(const Form &fo)
{
    if (this != &fo)
        this->b = fo.b;
    return (*this);
}

Form::Form(const Form &fo):name("name"),  b(0),  grade (1), grade_(1) 
{
    *this =  fo;
}

const std::string Form::getName()
{
    return (this->name);
}

void Form::beSigned(Bureaucrat &bure)
{
    std::cout << bure.getGrade() << "||" << Form::grade << std::endl;
    if (bure.getGrade() > Form::grade  )
        throw bure.low;
    this->b = 1;
}




