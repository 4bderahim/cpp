#pragma once
#ifndef __HUMANB_H__
#define __HUMANB_H__

#include "Weapon.hpp"
// class Weapon;
class HumanB
{
    public:
        HumanB(std::string name);
        void setWeapon(Weapon weapon);
        void attack();
    private:
        std::string name;
        Weapon *weapon;
};
#endif