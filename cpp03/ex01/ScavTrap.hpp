#include "ClapTrap.hpp"



class ScavTrap : public ClapTrap
{
    
     public:
        ScavTrap();
        ~ScavTrap();
        void attack(const std::string& target);
    

};