#include "Bureaucrat.hpp"


int main()
{
    // exception catched !
    Bureaucrat b = Bureaucrat("dsdsd", 12);
    Form f = Form(11,84);
    try
    {
        b.signForm(f);
    }
    catch (std::exception &ee)
    {
        std::cout << ee.what() << std::endl;
    }

    // all valid (no exception)
    Bureaucrat bb = Bureaucrat("name", 1);
    Form ff = Form(11,84);
    try
    {
        b.signForm(ff);
    }
    catch (std::exception &ee)
    {
        std::cout << ee.what() << std::endl;
    }


    

}
