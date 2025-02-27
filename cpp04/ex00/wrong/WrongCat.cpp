

#include "WrongCat.hpp"


Cat& Cat::operator=(const Cat &a)
{

    if (this != &a)
        this->type = a.type;
    return (*this);
}

std::string Cat::getType() const
{
    return (this->type);
}

Cat::Cat(const Cat &a)
{
    *this =  a;
}

Cat::~Cat()
{
    std::cout << "Cat destructed!" << std::endl;
}

Cat::Cat():  type ("Cat")
{
    std::cout << "cat's type setted !" << this->type <<  std::endl;
    std::cout << "Cat constructed!" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat makes a Sound ~~~~~~~~~ "<< std::endl;
}