#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << Zombie::name << ":" << " BraiiiiiiinnnzzzZ..." ;
}
void Zombie::set_name(Zombie *zz,  std::string new_name)
{
    zz->name = new_name;
}
Zombie *newZombie( std::string name)
{
    Zombie zz;
    zz.name = name;
    return &zz;
}