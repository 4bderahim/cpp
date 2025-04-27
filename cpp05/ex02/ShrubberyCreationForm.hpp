#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target , int grade_ex , int g_sign);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor);
};