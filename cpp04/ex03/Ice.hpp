
#pragma once
#include "Cure.hpp"

class Ice : public AMateria
{
    protected:
        std::string type;
    public:
        ~Ice();
        Ice();
        Ice(const Ice &cu);
        std::string const & getType() const;
        AMateria* clone() const;
        void use(ICharacter& target);
};
