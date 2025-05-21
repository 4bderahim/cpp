
#pragma once 
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
    private:
        const std::string name;
        bool b;
        const int grade;// sign
        const int grade_;// exec
    public:
        GradeTooHighException high;
        GradeTooLowException low;
        AForm(std::string name_ ,int grade, int grade_);
        AForm();
        ~AForm();
        AForm& operator=(const AForm &fo);
        AForm(const AForm &fo);
        int getGrade();
        int getGrade_();
        bool getBool() const;
        void check_execution_grade(const Bureaucrat & executor);
        void setBool(bool l);
        const std::string getName();
        void beSigned(Bureaucrat &bure);
        virtual void execute(Bureaucrat const & executor)  = 0;
};