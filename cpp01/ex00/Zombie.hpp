


#include <iostream>
#include <string>

class Zombie
{

    private:
        std::string name;
    public:
        Zombie();
        void announce( void );   
        void set_name(Zombie *zz, std::string new_name);
};
// Zombie *newZombie( std::string name);