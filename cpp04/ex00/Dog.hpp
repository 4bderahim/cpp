

#pragma once
#include "Animal.hpp"


class Dog : public Animal
{
    protected:
        std::string type;
    public:
        Dog();
        Dog(const Dog &a);
        Dog& operator=(const Dog &a);
        std::string getType() const;                 
        ~Dog();
        void makeSound() const;
};
