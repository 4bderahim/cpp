
#pragma once 
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm &operator=(const RobotomyRequestForm &robo);
        RobotomyRequestForm(const RobotomyRequestForm &robo);
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        // RobotomyRequestForm(std::string target , int grade_ex , int g_sign);
        ~RobotomyRequestForm();
        void execute(Bureaucrat const & executor) const;

};