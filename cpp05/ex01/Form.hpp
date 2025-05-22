#pragma once

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

class Bureaucrat;
class Form
{
    private:
        const std::string name;
        bool b;
        const int grade;
        const int grade_;
    public:
        GradeTooHighException high;
        GradeTooLowException low;
        Form(std::string name, int grade, int grade_);
        Form();
        ~Form();
        Form& operator=(const Form &fo);
        Form(const Form &fo);
        int getGrade();
        int getGrade_();
        bool getBool();
        void setBool();
        const std::string getName();
        void beSigned(Bureaucrat &bure);
};
std::ostream& operator<<(std::ostream& os,  Form  &obj);