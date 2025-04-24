#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
    protected:
        const int grade;
        const int name;
    public:
        virtual void execute(Bureaucrat const & executor) = 0;


};