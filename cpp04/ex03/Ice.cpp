

#include "Ice.hpp"

Ice::~Ice()
{
    std::cout << "Cure destructed!" << std::endl;
}

Ice::Ice(const Ice &i)
{
    *this = i; 
}

Ice::Ice()
{
    this->type =  "78978979789";
    std::cout << "Cure constructed!" << std::endl;

    std::cout << "------------------------>" << this->type << std::endl;
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

std::string const & Ice::getType() const
{
    return (this->type);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an bolt at " <<  target.getName()  << " *" << std::endl;

}
