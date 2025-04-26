
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():target ("target")
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target , int grade_ex , int g_sign):target (target), grade(g_sign), grade_(grade_ex)
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
    std::cout << this->target << "has been pardoned by Zaphod Beeblebrox" << std::endl;
    //write to file
}