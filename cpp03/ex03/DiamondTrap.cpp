#include "DiamondTrap.hpp"




DiamondTrap::DiamondTrap(const DiamondTrap &sc)
{
    *this = sc;
}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap &cl)
{
    if (this != &cl)
    {
        this->damage = cl.damage;
        this->energy = cl.energy;
        this->hit = cl.hit;
        this->name = cl.name;
    }
    return (*this);
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name+"_clap_name")
{
    std::cout << "DiamondTrap name constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap()// create constructors to set values.
{
    this->energy =  ScavTrap::getEnergy();
    this->hit    =  FragTrap::getHit();
    this->damage =  FragTrap::getDamage();
    std::cout << "DiamondTrap Constructed !" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructed !" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "my name is " << this->name << "DiamondTrap name" << ClapTrap::name << std::endl;
}
void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}