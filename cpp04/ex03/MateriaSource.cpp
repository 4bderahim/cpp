
#include "MateriaSource.hpp"


MateriaSource::~MateriaSource()
{

    std::cout << "MateriaSource destructed" << std::endl;
}
MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4;i++)
        {
            this->materias[i] = NULL;
            printf("\t\t||alloacated at %d\n\n", i);
        }
    // delete[] this->materias;
    // exit(1);
    std::cout << "MateriaSource constructed" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (this->materias[3] != NULL)
        std::cout << "the MateriaSource can know at most 4 Materias"  << std::endl;
    for (int i = 0; i < 4;i++)
    {
        if (this->materias[i] == NULL)
        {
            this->materias[i] = m;
            break;
        }
    }
    std::cout << ">>>>>@@"  << this->materias[0]->getType() << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    printf("|%s<<<<\n\n",this->materias[0]->getType().c_str());
    printf("|%s<<<<\n\n",this->materias[1]->getType().c_str());
    exit(1);
    for (int i = 0; i < 4; i++)
    {
        
        if (this->materias[i] != NULL && this->materias[i]->getType() == type)
            {
            //  AMateria::getType()   
                return (this->materias[i]->clone());
            }
    }
    return (NULL);
}