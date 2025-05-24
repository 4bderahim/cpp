#include "RobotomyRequestForm.hpp"

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& robo)
{
    if (this != &robo)
    {
        this->setBool(robo.getBool());
    }
    return(*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robo)
{
    *this =  robo;
}

RobotomyRequestForm::RobotomyRequestForm():target ("target"), AForm("RobotomyRequestForm",72,45)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):target (target),AForm("RobotomyRequestForm",72,45)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructed!" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    check_execution_grade(executor);
    std::cout << "... making some drilling noises....!" << std::endl;
    std::cout << this->target << " has been robotomized 50% of the time !" << std::endl;
}
