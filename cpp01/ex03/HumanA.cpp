
#include "HumanA.hpp"


// Weapon::Weapon(std::string type_)
// {
//     this->type = type_;
// }

HumanA::HumanA(std::string name, Weapon &weapon)
{
    this->weapon = weapon;
    this->name = name;
}
void HumanA::attack()
{
    std::cout <<  HumanA::name  <<  "attacks with their " << this->weapon.getType() << std::endl;
}