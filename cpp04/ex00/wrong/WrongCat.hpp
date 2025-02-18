#pragma once
#include "WrongAnimal.hpp"


class Cat :public Animal
{
    protected:
        std::string type;
    public:
        Cat();
        Cat(const Cat &a);
        Cat& operator=(const Cat &a);
        ~Cat();
        void makeSound() const;
};