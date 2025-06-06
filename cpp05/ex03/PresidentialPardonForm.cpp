#include "PresidentialPardonForm.hpp"

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& robo)
{
    if (this != &robo)
        this->setBool(robo.getBool());
    return(*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &robo)
{
    *this =  robo;
}

PresidentialPardonForm::PresidentialPardonForm():target ("target"), AForm("PresidentialPardonForm", 25,5)
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):target (target),AForm("PresidentialPardonForm",25,5)  
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructed!" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    check_execution_grade(executor);
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}