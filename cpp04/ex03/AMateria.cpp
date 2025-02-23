#include "AMateria.hpp"


AMateria::AMateria()
{
    std::cout << "hello" << std::endl;
}
AMateria::AMateria(std::string const & type)
{
    this->type = type;
}
std::string const & AMateria::getType() const //Returns the materia type
{
    return (this->type);
}


// void AMateria::use(ICharacter& target)
// {
//     return ;
// }

