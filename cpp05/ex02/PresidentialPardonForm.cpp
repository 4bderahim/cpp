#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():target ("target")
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):target (target)
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)  
{
    check_execution_grade(executor.getGrade() , 25, this->getGrade_() , 5 );
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}