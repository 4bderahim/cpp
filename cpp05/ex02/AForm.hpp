
#pragma once 
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
    private:
        const std::string name;
        bool b;
        const int grade;
        const int grade_;
    public:
        GradeTooHighException high;
        GradeTooLowException low;
        AForm(int grade, int grade_);
        AForm();
        ~AForm();
        AForm& operator=(const AForm &fo);
        AForm(const AForm &fo);
        int getGrade();
        int getGrade_();
        bool getBool();
        void check_execution_grade(const Bureaucrat & executor,int  rec_grade, int exec_grade, int rec_execgrade);
        void setBool();
        std::string getName();
        void beSigned(Bureaucrat &bure);
        virtual void execute(Bureaucrat const & executor)  = 0;
};