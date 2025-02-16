
#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap :   public ScavTrap, public FragTrap
{
    protected:
        std::string name;
    public:
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &cl);
        DiamondTrap& operator=(const DiamondTrap &cl);
        void whoAmI();
        void attack(const std::string& target);
}; 