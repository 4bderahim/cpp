#include "AForm.hpp"

AForm::AForm(std::string name_ , int gr, int gr_):name (name_),  grade (gr), grade_(gr_)
{
    if (gr  < 1 || gr_ < 1)
        throw AForm::high;
    if (gr > 150 || gr_ > 150)
        throw AForm::low;
    std::cout << "AForm constructed!" << std::endl;
}

AForm::AForm():name("!!name"), b(0), grade (101), grade_(11) 
{
    std::cout << "AForm constructed!" << std::endl;
}

AForm::~AForm()
{
    std::cout << "AForm destructed!" << std::endl;
}

int AForm::getGrade()
{
    return (this->grade);
}

int AForm::getGrade_()
{
    return (this->grade_);
}

bool AForm::getBool()const
{
    return (this->b);
}

void AForm::setBool(bool l)
{
    this->b = l;
}

AForm& AForm::operator=(const AForm &fo)
{
    if (this != &fo)
        this->b = fo.b;
    return (*this);
}

AForm::AForm(const AForm &fo): name(fo.name), grade (fo.grade), grade_(fo.grade_)
{
    std::cout << "AForm copy constructor called!" << std::endl;
    *this =  fo;
}

const std::string AForm::getName()
{
    return (this->name);
}

void AForm::beSigned(Bureaucrat &bure)
{
    std::cout << bure.getGrade() << "||" << AForm::grade << std::endl;
    if (bure.getGrade() > AForm::grade)
        throw bure.low;
    this->b = 1;
}

void AForm::check_execution_grade(Bureaucrat const & executor)
{
    if (!this->b ||  executor.getGrade() < this->grade_)
        throw AForm::low;
    // if (!this->b || executor.getGrade() > this->grade_)
    //     throw AForm::high;
}

