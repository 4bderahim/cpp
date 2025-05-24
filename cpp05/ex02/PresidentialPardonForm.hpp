
#include "AForm.hpp"


class PresidentialPardonForm: public AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm &operator=(const PresidentialPardonForm &robo);
        PresidentialPardonForm(const PresidentialPardonForm &robo);
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor) const;
};