

#include "WrongCat.hpp"


WrongCat& WrongCat::operator=(const WrongCat &a)
{

    if (this != &a)
        this->type = a.type;
    return (*this);
}

std::string WrongCat::getType() const
{
    return (this->type);
}

WrongCat::WrongCat(const WrongCat &a)
{
    *this =  a;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructed!" << std::endl;
}

WrongCat::WrongCat():  type ("WrongCat")
{
    std::cout << "WrongCat's type setted !" << this->type <<  std::endl;
    std::cout << "WrongCat constructed!" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat makes a Sound ~~~~~~~~~ "<< std::endl;
}