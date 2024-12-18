
#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
    HumanB::name = name;
    this->weapon = NULL;
}


void HumanB::setWeapon(Weapon weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    std::cout <<  HumanB::name  <<  "attacks with their " << this->weapon->getType() << std::endl;
}





