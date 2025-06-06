#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


Intern::Intern()
{
    std::cout << "Intern constructed !" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern destructed !" << std::endl;
}


Intern &Intern::operator=(const Intern& robo)
{
    //
    return(*this);
}

Intern::Intern(const Intern &Intern)
{
    *this =  Intern;
}

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

AForm *Intern::makeForm( std::string form_name, std::string form_target)
{
    AForm *( *makers[])(std::string target) = {&make_PresidentialPardonForm, &make_RobotomyRequestForm, make_ShrubberyCreationForm};
    std::string  str[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    int i;
    i = 0;
    while (i < 3)
    {
        if (form_name == str[i])
            {
                std::cout << "Intern creates " << form_name << std::endl;
                return ((makers[i](form_target)));
            }
        i++;
    }
    std::cout << "target name '" << form_name << "' not found!" <<  std::endl;
    return (NULL);
}



