#pragma once
#include <iostream>
#include "GradeTooLowException.hpp"
#include "GradeTooHighException.hpp"
#include "Form.hpp"
class Form;
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
        int getGrade();
        void signForm();
        ~Bureaucrat();

};