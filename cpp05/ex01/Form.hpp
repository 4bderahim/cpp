#pragma once

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
class Bureaucrat;
class Form: public std::exception
{
    private:
        const std::string name;
        bool b;
        const int grade;
        const int grade_;
    public:
        Form();
        ~Form();
        const int getGrade();
        const int getGrade_();
        bool getBool();
        void setBool();
        const std::string getName();
        void beSigned(Bureaucrat &bure);
};