
#pragma once
#include "IMateriaSource.hpp"

class MateriaSource:public IMateriaSource  
{
    protected:
        AMateria **materias;      
    public:
        MateriaSource();
        ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};