#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name,  int grade) :name (name)
{
    if (grade  < 1)
        throw low; 
    if (grade > 150)
        throw high;
    this->grade = grade;
    std::cout << "Bureaucrat constructed!" << std::endl;
}
Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat constructed !" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructed!" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bu)
{
    if (this != &bu)
        this->grade = bu.grade;
    return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &bu)
{
    *this = bu;
}

std::ostream& operator<<(std::ostream& os,Bureaucrat  &obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return (os);
}


std::string Bureaucrat::getName()
{
    return this->name;
}

int Bureaucrat::getGrade()
{
    return this->grade;
}

void Bureaucrat::signForm(Form form)  
{
    if (form.getBool())
        std::cout << "Bureaucrat : " << this->name <<  " couldn’t sign Form: " << form.getName() << "because its already signed!" << std::endl;
    form.beSigned(*this);
    std::cout << "Bureaucrat : " << this->name <<  " _signed Form: " << form.getName() << std::endl;
}

void Bureaucrat::increment(int grade_)
{
    if (this->grade-grade_ < 1)
        throw high;
    grade -= grade_;
    std::cout << "grade incremented by " << grade_ << " grade" << std::endl;
}

void Bureaucrat::decrement(int grade_)
{
    if (this->grade+grade_ > 150)
        throw low;
    grade += grade_ ;
    std::cout << "grade decremented by " << grade_ << " grade" << std::endl;

}
