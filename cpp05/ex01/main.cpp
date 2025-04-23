#include "Bureaucrat.hpp"


int main()
{
    // grade too high
    Bureaucrat b = Bureaucrat("dsdsd", 10000);
    Form f = Form(1,84);
    b.signForm(f);
    
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
