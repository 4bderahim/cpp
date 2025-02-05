#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const ScavTrap &sc)
{
    *this = sc;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    //
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

void guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{

    if (!hit || !energy)
        {
            std::cout << "target " << target << " is unhealthy to be attacked!" << std::endl;
            return ;
        }
    hit--;
    std::cout << "SvaTrap attacks "<< target  << " , causing <damage> points of damage!" << std::endl;
}