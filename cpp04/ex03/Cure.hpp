
// #pragma once

#include "AMateria.hpp"


class Cure : public AMateria
{
    protected:
        std::string type;
    public:
        ~Cure();
        Cure();
        Cure(const Cure &cu);
        std::string const & getType() const;
        AMateria* clone() const;
        void use(ICharacter& target);
};
