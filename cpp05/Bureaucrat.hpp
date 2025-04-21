#include <iostream>
#include "GradeTooLowException.hpp"
#include "GradeTooHighException.hpp"
class Bureaucrat
{
    private:
        const std::string name;
        int grade;
        GradeTooHighException high;
        GradeTooLowException low;
    public:
        Bureaucrat(int grade);
        Bureaucrat(const Bureaucrat &bu);
        Bureaucrat& operator=(const Bureaucrat &bu);
        std::string getName();
        int getGrade();
        ~Bureaucrat();
};