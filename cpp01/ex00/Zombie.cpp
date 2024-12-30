#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    Zombie::name  = name;
    std::cout << "a zombie on a mission.." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << Zombie::name << " is out!" << std::endl;
}

void Zombie::announce()
{
    std::cout << Zombie::name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(Zombie *zz,  std::string new_name)
{
    zz->name = new_name;
}


void randomChump( std::string name )
{
    Zombie zzz(name);
    zzz.announce();
}




