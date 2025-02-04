#include "ClapTrap.hpp"



class ScavTrap : public ClapTrap
{
     public:
        ScavTrap(std::string name);
        ScavTrap();
        ~ScavTrap();
        ScavTrap(const ScavTrap &sc);
        void attack(const std::string& target);
        void guardGate();
};