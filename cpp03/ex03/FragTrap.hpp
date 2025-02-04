#include "ScavTrap.hpp"



class FragTrap :virtual public ScavTrap
{
     public:
        FragTrap(std::string name);
        FragTrap();
        ~FragTrap();
        FragTrap(const FragTrap &sc);
        void highFivesGuys(void);
        int getHit();
        int getDamage();

        // void attack(const std::string& target);
        // void guardGate();
};