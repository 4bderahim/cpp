

#include "Dog.hpp"


Dog& Dog::operator=(const Dog &a)
{

    if (this != &a)
        {
            this->type = a.type;
            this->brain  = new Brain();
            for (int  i = 0; i < 100; i++)
                this->brain->ideas[i] =  a.brain->ideas[i]; 
        }
    return (*this);
}


Dog::Dog(const Dog &a)
{
    *this =  a;
}


std::string Dog::getType() const
{
    return (this->type);
}      

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructed!" << std::endl;
}

Dog::Dog():  type ("Dog")
{
    this->brain = new Brain(); 
    std::cout << "Dog constructed!" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog Makes a sound  ~~~~" << std::endl;
}