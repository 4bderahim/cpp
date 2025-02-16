#include "FragTrap.hpp"

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
FragTrap::FragTrap(int hit, int damage)
{
     this->hit = hit;
    this->damage = damage;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->energy =  100 ; 
    this->hit    =  10000;
    this->damage =  30;
}

FragTrap::FragTrap()
{
    this->energy =  100 ; 
    this->hit    =  10000;
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

    if (this->hit <= 0 || this->energy <= 0)
    {
        std::cout << "target " << target << " is unhealthy to be attacked!" << std::endl;
        return ;
    }
    this->energy--;
    std::cout << "FragTrap attacks "<< target  << " , causing <damage> points of damage!" << std::endl;
}