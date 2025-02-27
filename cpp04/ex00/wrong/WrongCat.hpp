#pragma once
#include "WrongAnimal.hpp"


class Cat :public WrongAnimal
{
    protected:
        std::string type;
    public:
        Cat();
        Cat(const Cat &a);
        Cat& operator=(const Cat &a);
        std::string getType() const;
        ~Cat();
        void makeSound() const;
};