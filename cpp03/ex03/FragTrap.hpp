

#pragma once
#include "ClapTrap.hpp"
class FragTrap : virtual public ClapTrap
{
     public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(int hit, int damage);
        ~FragTrap();
        FragTrap(const FragTrap &sc);
        FragTrap& operator=(const FragTrap& cl);
        void highFivesGuys(void);
        void attack(const std::string& target);
        void guardGate();
};