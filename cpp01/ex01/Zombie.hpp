#include <iostream>

class Zombie
{
    private:
        std::string name;
        
    public:
        ~Zombie();
        void announce( void );   
        void set_name(Zombie *zz, std::string new_name);
};
Zombie* zombieHorde( int N, std::string name);