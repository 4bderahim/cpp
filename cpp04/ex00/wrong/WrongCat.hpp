#pragma once
#include "WrongAnimal.hpp"


class WrongCat :public WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongCat();
        WrongCat(const WrongCat &a);
        WrongCat& operator=(const WrongCat &a);
        std::string getType() const;
        ~WrongCat();
        void makeSound() const;
};