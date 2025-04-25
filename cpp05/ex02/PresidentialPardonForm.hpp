
#include "AForm.hpp"


class PresidentialPardonForm: public AForm
{
    private:
        std::string target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor) ;

};