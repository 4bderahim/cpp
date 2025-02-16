
#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
     public:
        ScavTrap(std::string name);
        ScavTrap();
        ~ScavTrap();
        ScavTrap(const ScavTrap &sc);
        ScavTrap& operator=(const ScavTrap& cl);
        void attack(const std::string& target);
        void guardGate();
};