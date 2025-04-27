#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
int main()
{
    std::cout << "------------------------" << std::endl;
    {
    PresidentialPardonForm p("hello", 5, 50);
    Bureaucrat b("name1", 20);
        p.beSigned(b);
    try
    {
        p.execute(b);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    }

    std::cout << "------------------------" << std::endl;
    {
    ShrubberyCreationForm p("hello", 5, 50);
    Bureaucrat b("bu name2", 20);
    try
    {
        p.beSigned(b);
        p.execute(b);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    }
    std::cout << "------------------------" << std::endl;
    {
    RobotomyRequestForm p("hello2", 5, 50);
    Bureaucrat b("bu name", 20);
        p.beSigned(b);
    try
    {
        p.execute(b);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    }
}

