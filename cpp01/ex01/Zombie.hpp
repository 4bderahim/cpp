

#pragma once
#include <iostream>
class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void announce( void );   
        void set_name(Zombie *zz, std::string new_name);
};
Zombie* zombieHorde( int N, std::string name);
