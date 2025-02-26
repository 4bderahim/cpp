
#pragma once
#include "IMateriaSource.hpp"

class MateriaSource:public IMateriaSource  
{
    protected:
        AMateria *materias[4];      
    public:
        MateriaSource();
        ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};