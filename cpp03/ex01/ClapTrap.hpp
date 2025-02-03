

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

        void setDamage(int damage);
        void setEnergy(int en);
        void setHit(int hit);
        void setName(std::string name);

};