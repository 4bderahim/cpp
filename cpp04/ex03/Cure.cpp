

#include "Cure.hpp"

Cure::~Cure()
{
    std::cout << "Cure destructed!" << std::endl;

}
Cure::Cure(const Cure &cu)
{
    *this =  cu; 
}

Cure::Cure()
{
    std::cout << "Cure constructed!" << std::endl;
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

std::string const & Cure::getType() const
{
    return (this->type);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals "<< target.getName() << "s wounds *" << std::endl;
}
