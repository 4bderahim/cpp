

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    protected:
        Brain *brain;
        std::string type;
    public:
        Dog();
        Dog(const Dog &a);
        Dog& operator=(const Dog &a);
        ~Dog();
        void makeSound() const;
};