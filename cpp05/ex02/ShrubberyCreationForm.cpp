#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& robo)
{
    if (this != &robo)
    {
        this->setBool(robo.getBool());
    }
    return(*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &robo)
{
    *this = robo;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):target(target),  AForm("ShrubberyCreationForm", 72,45)
{
    std::cout << "ShrubberyCreationForm constructed!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm():target ("target")
{
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructed!" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const 
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
    file << "   .....//||||\\....   ";
    file.close();
}