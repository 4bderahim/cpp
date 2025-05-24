#pragma once
#include <iostream>
#include "GradeTooLowException.hpp"
#include "GradeTooHighException.hpp"
#include "AForm.hpp"
class AForm;
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
        Bureaucrat(const Bureaucrat &bu);
        std::string getName();
        int getGrade() const ;
        void signForm(AForm form) ;
        void increment(int grade_);
        void decrement(int grade_);
        void executeForm(AForm const & form) const; 
        ~Bureaucrat();
};
std::ostream& operator<<(std::ostream& os, Bureaucrat  &obj);