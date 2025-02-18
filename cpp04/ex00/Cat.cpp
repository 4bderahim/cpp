

#include "Cat.hpp"


Cat& Cat::operator=(const Cat &a)
{

    if (this != &a)
        this->type = a.type;
    return (*this);
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
    std::cout << "Cat constructed!" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "MEW :) "<< std::endl;
}