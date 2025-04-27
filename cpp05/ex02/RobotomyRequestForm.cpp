
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():target ("target")
{
    
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target , int grade_ex , int g_sign):target (target),AForm(g_sign, grade_ex)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructed!" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
    if (!this->b ||  executor.getGrade() < this->grade_)
        {
            std::cout << " robotomy failed!" << std::endl;
            throw AForm::low;
        }
    // check_execution_grade(executor);
    
    std::cout << "... making some drilling noises....!" << std::endl;
    std::cout << this->target << " has been robotomized 50% of the time !" << std::endl;
}
