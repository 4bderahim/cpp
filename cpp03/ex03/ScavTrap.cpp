#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const ScavTrap &sc)
{
    *this = sc;
}
int ScavTrap::getEnergy()
{
    return this->energy;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "ScavTrap name constructor called!" << std::endl;
}

ScavTrap::ScavTrap()
{
    this->energy =  50 ; 
    this->hit    =  100;
    this->damage =  20 ;
    std::cout << "ScavTrap Constructed !" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructed !" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{

      if (this->hit <= 0 || !this->energy <= 0)
        {
            std::cout << "target " << target << " is unhealthy to be attacked!" << std::endl;
            return ;
        }
    this->energy--;
    std::cout << "ScavTrap "<< name <<" attacks "<< target  << " , causing <damage> points of damage!" << std::endl;
    
}