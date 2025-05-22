#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
int main()
{
    {
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    delete rrf;
    }
    std::cout << "----------------------------" << std::endl;
    {
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("shrubberyd creation", "sBender");
    delete rrf;

    }
    std::cout << "----------------------------" << std::endl;
    {
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("presidential pardon", "aaaBender");
    delete rrf;

    }
}

