

#include "Ice.hpp"

Ice::~Ice()
{
    std::cout << "Cure destructed!" << std::endl;

}
Ice::Ice(const Cure &cu)
{
    *this =  cu; 
}

Ice::Ice()
{
    std::cout << "Cure constructed!" << std::endl;
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
    std::cout << "* heals "<< this->name << "s wounds *" << std::endl;
}
