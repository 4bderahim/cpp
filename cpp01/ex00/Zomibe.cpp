#include "Zombie.hpp"
#include <string>
void Zombie::announce()
{
    std::cout << Zombie::name << ":" << " BraiiiiiiinnnzzzZ..." ;
}
void Zombie::set_name(Zombie *zz,  const char *new_name)
{
    zz->name = (std::string )strdup((const char *)new_name);
}
Zombie *newZombie( std::string name)
{
    Zombie zz;
    zz.set_name(&zz, name.c_str());
    return &zz;
}

int main()
{

    Zombie *new_ = newZombie("Hellloo");
    std::cout << new_->name << std::endl;
}