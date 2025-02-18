

#include "Animal.hpp"


Animal& Animal::operator=(const Animal &a)
{
    if (this != &a)
        this->type = a.type;
    return (*this);
}

Animal::Animal(const Animal &a)
{
    *this = a;
}

Animal::~Animal()
{
    std::cout << "Animale destructed!" << std::endl;
}
Animal::Animal():  type ("Animal")
{
    std::cout << "Animale constructed!" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal makes a sound ~~~~~~~" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}
