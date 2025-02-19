


#include "Character.hpp"

Character::Character()
    :length (0), materias (new AMateria*[4]),unequipMaterias (new AMateria*) , name ("materia")
{
    for (int i = 0; i < 4; i++)
        this->materias[i] = NULL;
    std::cout << "Character constructed !" << std::endl;
}

Character::~Character()
{
    delete this->materias;
    delete this->unequipMaterias;
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
        if (this->unequipMaterias[i] == NULL)
            break;
    }
    this->unequipMaterias[length] = this->materias[idx];
    this->materias[idx] = NULL;// Unequiping
    this->length++;
}

void Character::use(int idx, Character& target)
{

}