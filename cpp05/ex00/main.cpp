#include "Bureaucrat.hpp"


int main()
{
    // grade too low
    try
    {
        Bureaucrat b = Bureaucrat("hello_world", 10000);
    }   
    catch(std::exception &e )
    {
        std::cout << e.what() << std::endl;
    }

    // grade too high
    try
    {
        Bureaucrat b = Bureaucrat("anyyyy", 0);
    }   
    catch(std::exception &e )
    {
        std::cout << e.what() << std::endl;
    }
    // increment++
    Bureaucrat bure =  Bureaucrat("cpp", 15);
    try
    {
        bure.increment(1);
        std::cout << "grade : "  <<  bure.getGrade() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    // decrement++

    try
    {
        bure.decrement(2);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "grade : "  <<  bure.getGrade() << std::endl;
    

}