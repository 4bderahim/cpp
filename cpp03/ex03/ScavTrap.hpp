
#pragma once

#include "ClapTrap.hpp"
class ScavTrap : virtual public ClapTrap
{
     public:
        ScavTrap(std::string name);
        ScavTrap();
        ScavTrap(int energy);
        ~ScavTrap();
        ScavTrap(const ScavTrap &sc);
        ScavTrap& operator=(const ScavTrap& cl);
        void attack(const std::string& target);
        void guardGate();
};