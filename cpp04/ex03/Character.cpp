


#include "Character.hpp"

Character::Character()
    :materias (new AMateria*[4]),unequipMaterias (new AMateria*[4]) , name ("materia")
{
    for (int i = 0; i < 4; i++)
        this->materias[i] = NULL;
    std::cout << "Character constructed !" << std::endl;
}


Character::~Character()
{
    std::cout << "Character destructed" << std::endl;
}

std::string const & Character::getName()
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (i < 4 && materias[i] != NULL)
            this->materias[i] = m;
    }
}

void Character::unequip(int idx) 
{
    for (int i = 0; i < 4; i++)
    {
        if (i < 4 && materias[i] != NULL)
            this->materias[i] = m;
    }
    
}

void Character::use(int idx, Character& target)
{

}