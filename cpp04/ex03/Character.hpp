
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
    protected:
        std::string name;
        AMateria **materias;
        AMateria **unequipMaterias;

    public:
        ~Character();
        std::string const & getName();
        void equip(AMateria* m);
        void unequip(int idx) ;
        void use(int idx, Character& target);
};