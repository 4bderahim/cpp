#include "Weapon.hpp"


#pragma once
#ifndef __HUMANA_H__
#define __HUMANA_H__
class HumanA
{
    private:
        std::string name;
        Weapon weapon;
    public:
        HumanA(std::string name, Weapon weapon);
        void attack();
};

#endif
