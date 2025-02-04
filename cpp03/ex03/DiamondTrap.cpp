#include "DiamondTrap.hpp"




DiamondTrap::DiamondTrap(const DiamondTrap &sc)
{
    *this = sc;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name+"_clap_name")
{
    std::cout << "diamondTrap name constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap()
{
    this->energy =  ScavTrap::getEnergy();
    this->hit    =  FragTrap::getHit();
    this->damage =  FragTrap::getDamage();
    std::cout << "FragTrap Constructed !" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "FragTrap destructed !" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "my name is " << this->name << "ClapTrap name" << ClapTrap::name << std::endl;
}
void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}