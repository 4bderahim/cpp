#include <iostream>
#include "Bureaucrat.hpp"

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
        Form(int grade, int grade_);
        Form();
        ~Form();
        Form& operator=(const Form &fo);
        Form(const Form &fo);
        virtual int getGrade()  = 0;
        virtual int getGrade_() = 0;
        virtual bool getBool()  = 0;
        virtual void setBool()  = 0;
        virtual const std::string getName() = 0;
        virtual void beSigned(Bureaucrat &bure);
        virtual void execute(Bureaucrat const & executor) = 0;
};