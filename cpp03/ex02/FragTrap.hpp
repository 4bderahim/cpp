#include "ScavTrap.hpp"



class FragTrap : public ScavTrap
{
     public:
        FragTrap(std::string name);
        FragTrap();
        ~FragTrap();
        FragTrap(const FragTrap &sc);
        FragTrap& operator=(const FragTrap& cl);
        void highFivesGuys(void);
        void attack(const std::string& target);
        void guardGate();
};