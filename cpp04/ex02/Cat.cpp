

#include "Cat.hpp"


Cat& Cat::operator=(const Cat &a)
{

   if (this != &a)
        {
            this->type = a.type;
            this->brain  = new Brain();
            for (unsigned long i = 0; i < a.brain->ideas->length(); i++ )
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
    std::cout << "Cat MEWing ~~~ "<< std::endl;
}