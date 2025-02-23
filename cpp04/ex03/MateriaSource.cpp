
#include "MateriaSource.hpp"


MateriaSource::~MateriaSource()
{

    std::cout << "MateriaSource destructed" << std::endl;
}
MateriaSource::MateriaSource()
: materias (new AMateria*[4])
{
    for (int i = 0; i < 4;i++)
        this->materias[i] = NULL;
    std::cout << "MateriaSource constructed" << std::endl;
}
void MateriaSource::learnMateria(AMateria* m)   
{
    if (this->materias[3] == NULL)
        std::cout << "the MateriaSource can know at most 4 Materias"  << std::endl;
    for (int i = 0; i < 4;i++)
    {
        if (this->materias[i] != NULL)
            this->materias[i] = m;
    }
    std::cout << "" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i] != NULL && type != "NULL")
            return (this->materias[i]->clone());
    }
    return (NULL);
}