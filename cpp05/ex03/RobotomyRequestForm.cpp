#include "RobotomyRequestForm.hpp"

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& robo)
{
    if (this != &robo)
    {
        this->b = robo.b;
    }
    return(*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robo)
{
    *this =  robo;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("name",72,45)
{
    std::cout << "RobotomyRequestForm constructed!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm():target ("target")
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target , int grade_ex , int g_sign):target (target),AForm("name", g_sign, grade_ex)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructed!" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
    if (!this->b || executor.getGrade() < this->grade_)
    {
        std::cout << " robotomy failed!" << std::endl;
        throw AForm::low;
    }
    // check_execution_grade(executor);
    std::cout << "... making some drilling noises....!" << std::endl;
    std::cout << this->target << " has been robotomized 50% of the time !" << std::endl;
}
