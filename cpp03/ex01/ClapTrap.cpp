
#include "ClapTrap.hpp"


void ClapTrap::setHit(int hit)
{
    this->hit = hit;
}
void ClapTrap::setEnergy(int en)
{
    this->energy = en;
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructed" << std::endl;
}

void ClapTrap::setDamage( int damage )
{
    this->damage  =damage;
}

void ClapTrap::setName(std::string name)
{
    this->name =  name;
}

ClapTrap::ClapTrap()
:
    hit (10),
    energy (10), 
    damage(0)
{
    std::cout << "Constructed" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
}

void ClapTrap::attack(const std::string& target)
{
    if (!this->hit || !this->energy)
        {
            std::cout << "target " << target << " is unhealthy to be attacked!" << std::endl;
            return ;
        }
    this->hit--;
    std::cout << "ClapTrap "<< name <<" attacks "<< target  << " , causing <damage> points of damage!" << std::endl;
    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (!this->hit || !this->energy)
        return ;
    this->damage += amount;
    std::cout << this->name << " took " << amount << " of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!this->hit || !this->energy)
        return ;
    this->hit += amount;
    this->energy--;
    std::cout << this->name << " repaired ,, amount : " << amount << std::endl;
}








