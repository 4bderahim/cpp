


#include "FragTrap.hpp"


class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
    protected:
        std::string name;
    public:
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &cl);
        void whoAmI();
        void attack(const std::string& target);
        // void takeDamage(unsigned int amount);
        // void beRepaired(unsigned int amount);
}; 