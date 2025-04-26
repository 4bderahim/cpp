#include "PresidentialPardonForm.hpp"


int main()
{
    PresidentialPardonForm p("hello", 15, 8);
    Bureaucrat b("bu name", 150);
    try
    {
        p.execute(b);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}
