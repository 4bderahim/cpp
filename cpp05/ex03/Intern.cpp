#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

AForm  *make_PresidentialPardonForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}

AForm  *make_RobotomyRequestForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

AForm  *make_ShrubberyCreationForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

AForm &Intern::makeForm( std::string form_name, std::string form_target)
{
    AForm *( *makers[])(std::string target) = {&make_PresidentialPardonForm, &make_RobotomyRequestForm, make_ShrubberyCreationForm};
    std::string  str[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    int i;
    while (i < 3)
    {
        if (form_name == str[i])
            break;
        i++;
    }
    std::cout << "Intern creates " << form_name << std::endl;
    return *((makers[i](form_target)));
}



