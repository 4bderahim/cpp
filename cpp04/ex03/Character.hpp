#pragma once
#include "Character.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
    protected:
        std::string name;
        AMateria **materias;
        AMateria **unequipMaterias;
        unsigned int length;
    public:
        ~Character();
        Character();
        Character(std::string name);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx) ;
        void use(int idx, ICharacter& target);
};