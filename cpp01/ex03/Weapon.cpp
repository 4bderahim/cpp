#include "Weapon.hpp"

Weapon::Weapon()
{
    //
}
Weapon::Weapon(std::string type)
{
     this->type = type;
}

const std::string& Weapon::getType()
{
    std::string &ref = this->type;
    return (ref);
}

void Weapon::setType(std::string new_)
{
    Weapon::type = new_;
}



