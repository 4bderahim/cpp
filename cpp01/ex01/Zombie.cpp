#include "Zombie.hpp"
// #include <string>

Zombie::~Zombie()
{
    std::cout << "a zombie destroyed!!\n";
}
void Zombie::announce()
{
    std::cout << this->name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
    std::cout << "a zombie created!!" << std::endl;   
}
void Zombie::set_name(Zombie *zz,  std::string new_name)
{
    zz->name = new_name;
}

Zombie* zombieHorde( int N, std::string name)
{
    
    Zombie *zzz;

    if (N <= 0 )
        return (NULL);
    zzz = new Zombie[N];

    for (int i = 0; i < N ; i++)
        zzz[i].set_name(&zzz[i] ,name);
    return (zzz);
}

