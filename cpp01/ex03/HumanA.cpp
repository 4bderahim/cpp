
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
    HumanA::weapon  = &weapon;
    HumanA::name    = name;
}

void HumanA::attack()
{
    std::cout << HumanA::name << " attacks with " << HumanA::weapon->getType() << std::endl;
}