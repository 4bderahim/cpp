#include "PresidentialPardonForm.hpp"


int main()
{
    PresidentialPardonForm p("hello", 5, 50);
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
