#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat :public Animal
{
    protected:
        Brain *brain;
        std::string type;
    public:
        Cat();
        Cat(const Cat &a);
        Cat& operator=(const Cat &a);
        ~Cat();
        void makeSound() const;
};