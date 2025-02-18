

#include "Dog.hpp"


Dog& Dog::operator=(const Dog &a)
{

    if (this != &a)
        this->type = a.type;
    return (*this);
}


Dog::Dog(const Dog &a)
{
    *this =  a;
}

Dog::~Dog()
{
    std::cout << "Dog destructed!" << std::endl;
}

Dog::Dog():  type ("Dog")
{
    std::cout << "Dog constructed!" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog makes a sound ~~~~~~~" << std::endl;
}