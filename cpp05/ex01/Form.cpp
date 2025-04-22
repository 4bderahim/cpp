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
const std::string Form::getName()
{
    return (this->name);
}

