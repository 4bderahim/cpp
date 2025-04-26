
#include "AForm.hpp"
#include <fstream>

class PresidentialPardonForm: public AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target , int grade_ex , int g_sign);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor);
};