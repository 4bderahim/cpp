#include "Zombie.hpp"

int main()
{
    Zombie *Zzz;
    Zzz = zombieHorde(10, "name");
    if (Zzz == NULL)
        return (1);

    for (int i = 0; i < 10; i++)
        Zzz->announce();
    delete[] Zzz;
    return (0);
}