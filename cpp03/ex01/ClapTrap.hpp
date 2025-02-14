
#include <iostream>


class ClapTrap
{
    protected:
        std::string name;
        int hit;
        int energy;
        int damage;
    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &cl);
        ClapTrap& operator=(const ClapTrap &cl);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
}; 