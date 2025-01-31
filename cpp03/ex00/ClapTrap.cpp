
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
    name = name;
}

void ClapTrap::attack(const std::string& target)
{
    if (!this->hit)
        {
            std::cout << "target " << target << " is unhealthy to be attacked!" << std::endl;
            return ;
        }
    this->hit--;
    std::cout << "ClapTrap "<< name <<" attacks "<< target  << " , causing <damage> points of damage!" << std::endl;
    
}
void ClapTrap::takeDamage(unsigned int amount)
{
    this->damage += amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{


}








