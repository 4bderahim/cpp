
#include "ClapTrap.hpp"


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
    hit  = 10;
    energy  = 10;
    damage = 0;
}

void ClapTrap::attack(const std::string& target)
{
     if (this->hit <= 0 || this->energy <= 0)
        {
            std::cout << "target " << target << " is unhealthy to be attacked!" << std::endl;
            return ;
        }
    this->energy--;
    std::cout << "ClapTrap "<< name <<" attacks "<< target  << " , causing <damage> points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit <= 0 || this->energy <= 0)
        {
            std::cout << "no hit point / energy" << std::endl;
            return ;
        }
    this->energy -= amount ;
    std::cout << this->name << " took " << amount << " of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hit <= 0 || this->energy <= 0)
        {
            std::cout << "no hit/energy point left" << std::endl;
            return ;
        }
    this->hit += amount;
    this->energy--;
    std::cout << this->name << " repaired ,, amount : " << amount << std::endl;
}
