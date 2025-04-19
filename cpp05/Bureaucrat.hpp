#include <iostream>
#include "GradeTooLowException.hpp"
class Bureaucrat
{
    private:
        const std::string name;
        int grade;
        GradeTooLowException low;
    public:
        Bureaucrat(int grade);
        ~Bureaucrat();
        std::string getName();
        int getGrade();
};