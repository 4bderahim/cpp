
#include "PresidentialPardonForm.hpp"

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
    std::cout << this->target << "has been pardoned by Zaphod Beeblebrox" << std::endl;
    std::ofstream file(this->target+"_shrubbery");
    file << "       ccee88oo";
    file << "  C8O8O8Q8PoOb o8oo";
    file << " dOB69QO8PdUOpugoO9bD";
    file << "CgggbU8OU qOp qOdoUOdcb";
    file << "    6OuU  /p u gcoUodpP";
    file << "      \\//  /douUP";
    file << "        \\////";
    file << "         |||/\\";
    file << "         |||//";
    file << "         |||||";
    file << "   .....//||||\\....   ";
    file.close();
}