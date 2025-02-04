#include "ClapTrap.hpp"



class ScavTrap :virtual public ClapTrap
{
     public:
        ScavTrap(std::string name);
        ScavTrap();
        int getEnergy();
        ~ScavTrap();
        ScavTrap(const ScavTrap &sc);
        void attack(const std::string& target);
        void guardGate();

};