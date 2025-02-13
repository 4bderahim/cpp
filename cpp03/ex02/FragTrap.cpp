#include "FragTrap.hpp"





FragTrap::FragTrap(std::string name): ScavTrap(name)
{
    //
}


FragTrap::FragTrap(const FragTrap &sc)
{
    *this = sc;
}

FragTrap& FragTrap::operator=(const FragTrap& cl)
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

void FragTrap::guardGate()
{
    std::cout << "FragTrap is now in Gate keeper mode" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "high fives " << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (hit <= 0  || energy <= 0 )
    {
        std::cout << "target " << target << " is unhealthy to be attacked!" << std::endl;
        return ;
    }
    hit--;
    std::cout << "FragTrap attacks "<< target  << " , causing <damage> points of damage!" << std::endl;
}