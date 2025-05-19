#include "Bureaucrat.hpp"


int main()
{
    {
    // exception catched !
    Bureaucrat b = Bureaucrat("cpp", 12);
    Form f = Form(11,84);
    try
    {
        b.signForm(f);
    }
    catch (std::exception &ee)
    {
        std::cout << ee.what() << std::endl;
    }
    }
    // all valid (no exception)
    {
    std::cout << "--------------" << std::endl;
    Bureaucrat bb = Bureaucrat("name", 1);
    Form ff = Form(11,84);
    std::cout  << bb << std::endl;
    try
    {
        bb.signForm(ff);
    }
    catch (std::exception &ee)
    {
        std::cout << ee.what() << std::endl;
    }
    }
    std::cout << "--------------------" << std::endl; 
}
