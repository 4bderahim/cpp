
#include "HumanA.hpp"




Weapon::Weapon(std::string type)
{
    this->type = type;
}


HumanA::HumanA(std::string name, Weapon weapon)
{
    this->weapon = weapon;
    this->name = name;
}
void HumanA::attack()
{
    std::cout <<  HumanA::name  <<  "attacks with their " << this->weapon.getType() << std::endl;
}