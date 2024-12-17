#include <iostream>


class Weapon
{
    private:
        std::string type;
    
    const std::string& getType();
    void setType(std::string new_);
};