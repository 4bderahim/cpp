#include <iostream>

class Zombie
{
    private:
        std::string name;
        void announce( void );   
    public:
        void set_name(Zombie *zz, const char *new_name);
};