
#pragma once
#include <iostream>
#include "ICHaracter.hpp"

class ICharacter;
class AMateria
{
    protected:
        std::string name;
        std::string type;
    public:
        AMateria();
        AMateria(std::string const & type);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) {std::cout  << "<<<<<<<<<<<<<<<<";}
};