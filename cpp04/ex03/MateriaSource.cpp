
#include "MateriaSource.hpp"


~MateriaSource()
{

    std::cout << "MateriaSource destructed" << std::endl;
}
MateriaSource()
{

    std::cout << "MateriaSource constructed" << std::endl;
}
void learnMateria(AMateria*)   
{
    
}
AMateria* createMateria(std::string const & type) = 0;