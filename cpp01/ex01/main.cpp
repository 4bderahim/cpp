#include "Zombie.hpp"

int main()
{
    Zombie *Zzz;
    Zzz = zombieHorde(10, "zzozozoz");
    for (int i = 0; i < 10; i++)
    {
        Zzz->announce();
    }
    delete[] Zzz;
}