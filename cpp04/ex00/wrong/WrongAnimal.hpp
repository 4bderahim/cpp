#pragma once
#include <iostream>


class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &a);
        Animal& operator=(const Animal &a);
        Animal(std::string type);
         ~Animal();
         void makeSound() const;
        std::string getType() const;                 
};