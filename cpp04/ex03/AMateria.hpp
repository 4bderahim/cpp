


#pragma once
#include "ICHaracter.hpp"

class AMateria
{
    protected:
        std::string name;
    public:
        AMateria();
        AMateria(std::string const & type);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};