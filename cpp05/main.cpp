#include "Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat b = Bureaucrat("dsdsd", 10000);
    }   
    catch(std::exception &e )
    {
        std::cout << e.what() << std::endl;
    }

}