#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

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
        const std::string getName();
        void beSigned(const Bureaucrat &bure);


};