#include "ScavTrap.hpp"



ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->energy =  50 ; 
    this->hit    =  100;
    this->damage =  20 ;
    std::cout << "ScavTrap(name) constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cl)
{
    *this = cl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &cl)
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

     if (this->hit <= 0 || this->energy <= 0)
        {
            std::cout << "target "<< this->hit << target << " is unhealthy to be attacked!" << std::endl;
            return ;
        }
    this->energy--;
    std::cout << "ScavTrap "<< name <<" attacks "<< target  << " , causing " << damage << " points of damage!" << std::endl;
    
}