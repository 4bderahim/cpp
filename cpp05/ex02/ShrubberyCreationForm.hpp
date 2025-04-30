
// #pragma once 

#include "AForm.hpp"
#include <fstream>
class ShrubberyCreationForm: public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &robo);
        ShrubberyCreationForm(const ShrubberyCreationForm &robo);
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(std::string target , int grade_ex , int g_sign);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor);
};