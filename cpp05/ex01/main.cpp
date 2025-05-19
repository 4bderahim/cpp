#include "Bureaucrat.hpp"


int main()
{
    // {
    // // exception catched !
    // Bureaucrat b = Bureaucrat("cpp", 12);
    // Form f = Form("formaNName",11,84);
    // try
    // {
    //     b.signForm(f);
    // }
    // catch (std::exception &ee)
    // {
    //     std::cout << ee.what() << std::endl;
    // }
    // }
    // all valid (no exception)
    {
    Bureaucrat bb = Bureaucrat("name", 99);
    // std::cout << bb << "--------------" << std::endl;
    Form ff = Form("formName", 11,84);
    std::cout << ff.getName() << "-1-1-1--1\n";
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
