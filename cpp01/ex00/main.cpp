
#include "Zombie.hpp"


Zombie *newZombie( std::string name)
{
    Zombie *zz;
    zz = new Zombie();
    zz->set_name(zz, name.c_str());
    return zz;
}

int main()
{
    Zombie *new_ = newZombie("Hellloo");
    new_->announce();
    delete new_;
}