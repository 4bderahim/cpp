#include "Zombie.hpp"


Zombie::Zombie()
{
    //
}
void Zombie::announce()
{
    std::cout << Zombie::name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(Zombie *zz,  std::string new_name)
{
    zz->name = new_name;
}



