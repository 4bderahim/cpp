

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
        ~ClapTrap();
        ClapTrap(std::string name);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);


};