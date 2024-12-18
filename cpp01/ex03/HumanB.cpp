
#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
    HumanB::name = name;
    HumanB::weapon = NULL;
}

void HumanB::setWeapon(Weapon &weapon)
{
    HumanB::weapon = &weapon;
}

void HumanB::attack()
{
    std::cout <<  HumanB::name  <<  " attacks with " << this->weapon->getType() << std::endl;
}





