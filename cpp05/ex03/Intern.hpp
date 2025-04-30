
#pragma once
#include "AForm.hpp"
class Intern
{
    public:
        Intern &operator=(const Intern &robo);
        Intern(const Intern &robo);
        Intern();
        ~Intern();
        AForm *makeForm( std::string form_name, std::string form_target);
};
