#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


AForm  &make_presidentialpardonForm(std::string target)
{
    AForm *form;
    form =  &PresidentialPardonForm();

    return (*form);
}

AForm &Intern::makeForm( std::string form_name, std::string form_target)
{
    AForm *( *makers[])(std::string target) = {&make_presidentialpardonForm};
    std::string  str[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    // AForm f;
    // f = AForm();
}



