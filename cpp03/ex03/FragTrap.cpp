#include "FragTrap.hpp"




FragTrap::FragTrap(const FragTrap &sc)
{
    *this = sc;
}

FragTrap::FragTrap(std::string name): ScavTrap(name)
{
    //
}
int FragTrap::getHit()
{
    return this->hit;
}
int FragTrap::getDamage()
{
    return this->damage;
}
FragTrap::FragTrap()
{
    this->energy =  100 ; 
    this->hit    =  100;
    this->damage =  30;
    std::cout << "FragTrap Constructed !" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructed !" << std::endl;
}

void guardGate()
{
    std::cout << "FragTrap is now in Gate keeper mode" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "high fives " << std::endl;
}

void FragTrap::attack(const std::string& target)
{

    if (this->hit <= 0 || !this->energy <= 0)
    {
        std::cout << "target " << target << " is unhealthy to be attacked!" << std::endl;
        return ;
    }
    hit--;
    std::cout << "FragTrap attacks "<< target  << " , causing <damage> points of damage!" << std::endl;
}