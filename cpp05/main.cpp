#include "Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat b = Bureaucrat("dsdsd", 0);
    }   
    catch( b.low &e )
    {
        std::cout << e.what() << std::endl;
    }


}