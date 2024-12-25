#include <iostream>
#include <string>
#include "harl.hpp"


Harl::Harl()
{
    void (Harl::*levelsStrPrts[4]) ()= {&Harl::debug ,  &Harl::error,  &Harl::warning, &Harl::info};
}
void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::warning()
{
    std::cout << "think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    
}

void Harl::complain( std::string level )
{
    // void (Harl::*levelsStrPrts[4]) () = {&Harl::debug ,  &Harl::error,  &Harl::warning, &Harl::info};
    Harl h;
    std::string levels[4] = 
    {
        "warning",
        "error",
        "debug",
        "info",
    };

    for (int i = 0; i < 4; i++)
    {
        if (levels[i].compare(level))
            {
                (this->*levelsStrPrts[i]) ();
                return ;
            }
        i++;
    }
    std::cout << "Undefined complaint!!" << std::endl;
}

int main()
{
    Harl ha;
    ha.complain("error");
    return (0);
}