#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        void announce( void );   
        void set_name(Zombie *zz, std::string new_name);
};