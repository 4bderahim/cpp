

#include "Cat.hpp"


Cat& Cat::operator=(const Cat &a)
{

    // deep copy !
   if (this != &a)
        {
            this->type = a.type;
            this->brain  = new Brain();
            for (int i = 0; i < 100; i++)
                this->brain->ideas[i] =  a.brain->ideas[i]; 
        }
    return (*this);
}

Cat::Cat(const Cat &a)
{
    *this =  a;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructed!" << std::endl;
}

Cat::Cat():  type ("Cat")
{
    this->brain =  new Brain();
    std::cout << "Cat constructed!" << std::endl;
}

void Cat::makeSound() const 
{
    std::cout << "Cat makes  a sound ~~~~~~~~ "<< std::endl;
}