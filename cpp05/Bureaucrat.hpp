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
        Bureaucrat(std::string name,  int grade);
        Bureaucrat& operator=(const Bureaucrat &bu);
        Bureaucrat(const Bureaucrat &bu);
        std::string getName();
        int getGrade();
        ~Bureaucrat();
};