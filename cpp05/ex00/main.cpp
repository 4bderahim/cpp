#include "Bureaucrat.hpp"


int main()
{
    // grade too low
    
    try
    {
        Bureaucrat b = Bureaucrat("hello_world", 10);
        std::cout << b << std::endl;
    }   
    catch(std::exception &e )
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "--------------------------" << std::endl;
    // grade too high
    try
    {
        Bureaucrat b = Bureaucrat("anyyyy", 1);
        std::cout << b << std::endl;

    }   
    catch(std::exception &e )
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "--------------------------" << std::endl;

    // increment++
    Bureaucrat bure =  Bureaucrat("cpp", 15);
    try
    {
        std::cout << "grade : "  <<  bure.getGrade() << std::endl;
        bure.increment(1);
        std::cout << "grade : "  <<  bure.getGrade() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "--------------------------" << std::endl;

    // decrement++

    try
    {
        std::cout << "grade : "  <<  bure.getGrade() << std::endl;
        bure.decrement(2);
        std::cout << "grade : "  <<  bure.getGrade() << std::endl;

    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    // std::cout << "grade : "  <<  bure.getGrade() << std::endl;
    

}