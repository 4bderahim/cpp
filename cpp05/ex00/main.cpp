#include "Bureaucrat.hpp"


int main()
{
    // grade too high
    try
    {
        Bureaucrat b = Bureaucrat("hello_world", 10000);
    }   
    catch(std::exception &e )
    {
        std::cout << e.what() << std::endl;
    }

    // grade too low
    try
    {
        Bureaucrat b = Bureaucrat("dsdsd", 0);
    }   
    catch(std::exception &e )
    {
        std::cout << e.what() << std::endl;
    }
}