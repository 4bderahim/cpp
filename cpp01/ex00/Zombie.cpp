#include "Zombie.hpp"
#include <string>

void Zombie::announce()
{
    std::cout << Zombie::name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(Zombie *zz,  std::string new_name)
{
    zz->name = new_name;
    // (std::string )strdup((const char *)new_name);
}

Zombie *newZombie( std::string name)
{
    Zombie *zz;
    zz->set_name(zz, name.c_str());
    return zz;
}

int main()
{
    Zombie *new_ = newZombie("Hellloo");
    new_->announce();
}