
#pragma once

#include <iostream>
class ClapTrap
{
    private:
        std::string name;
        int hit;
        int energy;
        int damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &cl);
        virtual ~ClapTrap();
        ClapTrap& operator=(const ClapTrap &cl);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
