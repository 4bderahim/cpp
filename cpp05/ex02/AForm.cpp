#include "AForm.hpp"

AForm::AForm(int gr, int gr_): grade (gr), grade_(gr_)
{
    if (gr  < 1)
        throw AForm::low;
    if (gr > 150)
        throw AForm::high;
    std::cout << "Form constructed!" << std::endl;
}

AForm::AForm():name("name"),  b(0),  grade (1), grade_(1) 
{
    std::cout << "Form constructed!" << std::endl;
}

AForm::~AForm()
{
    std::cout << "Form destructed!" << std::endl;
}

int AForm::getGrade()
{
    return (this->grade);
}

int AForm::getGrade_()
{
    return (this->grade_);
}

bool AForm::getBool()
{
    return (this->b);
}

void AForm::setBool()
{
    this->b = 1;
}

AForm& AForm::operator=(const AForm &fo)
{
    if (this != &fo)
    {
        this->b = fo.b;
        //this->grade = for.grade;
    }
    return (*this);
}

AForm::AForm(const AForm &fo):name("name"),  b(0),  grade (1), grade_(1) 
{
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

void AForm::check_execution_grade(int grade,int  rec_grade, int exec_grade, int rec_execgrade)
{
    if (!this->b || grade < rec_grade || exec_grade < rec_execgrade)
        throw AForm::low;
    if (!this->b || grade > rec_grade || exec_grade > rec_execgrade)
        throw AForm::high;
}

