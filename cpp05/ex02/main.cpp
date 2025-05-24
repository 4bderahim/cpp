#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
int main()
{
    //
    std::cout << "------------------------" << std::endl;
    {
    PresidentialPardonForm p("hello0");
    Bureaucrat b("name0", 2);
    try
    {
        p.beSigned(b);
        // p.execute(b);
        b.executeForm(p);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << "<<\n";
    }
    }

    std::cout << "------------------------" << std::endl;

    {
    ShrubberyCreationForm p("hello1");
    Bureaucrat b("bu name1", 20);
    try
    {
        p.beSigned(b);        
        b.executeForm(p);

    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    }
    std::cout << "------------------------" << std::endl;
    {
    RobotomyRequestForm p("hello2");
    Bureaucrat b("bu name2", 46);
    try
    {
        p.beSigned(b);
        b.executeForm(p);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    }
}

