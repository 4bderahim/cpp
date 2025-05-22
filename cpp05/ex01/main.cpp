#include "Bureaucrat.hpp"


int main()
{
    {
    // exception catched !
    Bureaucrat b = Bureaucrat("cpp", 12);
    Form f = Form("formaNName",11,84);
    try
    {
        b.signForm(f);
    }
    catch (std::exception &ee)
    {
        std::cout << ee.what() << std::endl;
    }
    }
    std::cout << "--------------------" << std::endl; 

    // all valid (no exception)
    {
    Bureaucrat bb = Bureaucrat("name", 10);
    Form ff = Form("formName", 11,84);
    // std::cout << ff << std::endl;
    // std::cout  << bb << std::endl;
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
