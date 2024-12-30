
#include "harl.hpp"


Harl::Harl()
{
    std::cout << "Harl in action.." << std::endl;
}
void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void Harl::complain( std::string level )
{
    
    std::string levels[4] = 
    {
        "debug",
        "info",
        "warning",
        "error",
    };
    int i;
    for (i = 0; i < 4; i++)
    {
        if (!levels[i].compare(level))
            break;
    }
    switch (i){
        case 0:
            this->debug();
            this->info();
            this->warning();
            this->error();
            break;
        case 1:
            this->info();
            this->warning();
            this->error();
            break;
        case 2:
            this->warning();
            this->error();
            break;
        case 3:
            this->error();
            break;
        default:
            std::cout << "Undefined complaint!!" << std::endl;
            break;
    }
}

