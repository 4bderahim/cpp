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
    this->energy =  100;
    this->hit    =  100;
    this->damage =  30 ;
    std::cout << "FragTrap Constructed !" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "FragTrap destructed !" << std::endl;
}

// void guardGate()
// {
//     std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
// }

void FragTrap::highFivesGuys(void)
{
    std::cout << "high fives " << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{

    if (!hit || !energy)
    {
        std::cout << "target " << target << " is unhealthy to be attacked!" << std::endl;
        return ;
    }
    hit--;
    std::cout << "FragTrap attacks "<< target  << " , causing <damage> points of damage!" << std::endl;
}