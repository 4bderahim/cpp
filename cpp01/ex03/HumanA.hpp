
#pragma once
#ifndef __HUMANA_H__
#define __HUMANA_H__
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, Weapon &weapon);
        void attack();
    private:
        std::string name;
        Weapon &weapon;
};
#endif