
#include "PresidentialPardonForm.hpp"


PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& robo)
{
    if (this != &robo)
        this->b = robo.b;
    return(*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &robo)
{
    *this =  robo;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm(72,45)
{
    std::cout << "ShrubberyCreationForm constructed!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm():target ("target")
{
    
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target , int grade_ex , int g_sign):target (target),AForm(g_sign, grade_ex)
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructed!" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
    check_execution_grade(executor);
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}