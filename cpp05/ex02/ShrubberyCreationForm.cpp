#include "ShrubberyCreationForm.hpp"



ShrubberyCreationForm::ShrubberyCreationForm():target ("target")
{
    
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target , int grade_ex , int g_sign):target (target),AForm(g_sign, grade_ex)
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "PresidentialPardonForm destructed!" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
    check_execution_grade(executor);
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    std::ofstream file(this->target+"_shrubbery");
    file << "       ccee88oo\n";
    file << "  C8O8O8Q8PoOb o8oo\n";
    file << " dOB69QO8PdUOpugoO9bD\n";
    file << "CgggbU8OU qOp qOdoUOdcb\n";
    file << "    6OuU  /p u gcoUodpP\n";
    file << "      \\//  /douUP\n";
    file << "        \\////\n";
    file << "         |||/\\\n";
    file << "         |||//\n";
    file << "         |||||\n";
    file << "   .....//||||\\....   \n";
    file.close();
}