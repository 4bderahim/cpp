#include <iostream>
#include "GradeTooLowException.hpp"
#include "GradeTooHighException.hpp"
class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        GradeTooHighException high;
        GradeTooLowException low;
        Bureaucrat();
        Bureaucrat(std::string name,  int grade);
        Bureaucrat& operator=(const Bureaucrat &bu);
        Bureaucrat(Bureaucrat &bu);
        std::string getName();
        int getGrade();
        ~Bureaucrat();
};