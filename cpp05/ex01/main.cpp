#include "Bureaucrat.hpp"


int main()
{
    // grade too high
    Bureaucrat b = Bureaucrat("dsdsd", 10);
    Form f = Form(1,84);
    try
    {
        b.signForm(f);
    }
    catch (std::exception &ee)
    {
        std::cout << ee.what() << std::endl;
    }
    
    // try
    // {
    //     Bureaucrat b = Bureaucrat("dsdsd", 10000);
    // }   
    // catch(std::exception &e )
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // // grade too low
    // try
    // {
    //     Bureaucrat b = Bureaucrat("dsdsd", 0);
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }

}
