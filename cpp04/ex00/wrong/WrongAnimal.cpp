

#include "WrongAnimal.hpp"


WrongAnimal& WrongAnimal::operator=(const WrongAnimal &a)
{
    if (this != &a)
        this->type = a.type;
    return (*this);
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->type =  type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
    *this = a;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimale destructed!" << std::endl;
}
WrongAnimal::WrongAnimal():  type ("WrongAnimal")
{
    std::cout << "WrongAnimale constructed!" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makes a sound ~~~~~~~" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}
