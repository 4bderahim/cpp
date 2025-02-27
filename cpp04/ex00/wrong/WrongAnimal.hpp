


#pragma once
#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &a);
        WrongAnimal& operator=(const WrongAnimal &a);
        WrongAnimal(std::string type);
        ~WrongAnimal();
        void makeSound() const;
        std::string getType() const;                 
};