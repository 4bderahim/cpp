#include "Form.hpp"

Form::Form(std::string name_ , int gr, int gr_):name (name_),  grade (gr), grade_(gr_)
{
    if (gr  < 1)
        throw Form::high;
    if (gr > 150)
        throw Form::low;
    std::cout << "Form constructed!" << std::endl;
}

Form::Form():name("!!name"), b(0), grade (101), grade_(11)
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

Form::Form(const Form &fo): name(fo.name), grade (fo.grade), grade_(fo.grade_)
{
    std::cout << "Form copy constructor called!" << std::endl;
    *this =  fo;
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

std::ostream& operator<<(std::ostream& os, Form  &obj)
{
    os << "name :" << obj.getName() << " b : " << obj.getBool() << " sign garde : " << obj.getGrade() << " exec garde : " << obj.getGrade_();
    return (os);
}





