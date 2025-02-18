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
        virtual ~Animal();
        virtual void makeSound() const = 0;
        std::string getType() const;                 
};