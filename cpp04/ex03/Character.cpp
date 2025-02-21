


#include "Character.hpp"

Character::Character()
    :name ("materia"),materias (new AMateria*[4]),unequipMaterias (new AMateria*) 
{
    for (int i = 0; i < 4; i++)
        this->materias[i] = NULL;
    length = 0;
    std::cout << "Character constructed !" << std::endl;
}

Character::Character(std::string name)
{
    this->name = name;
}

Character::~Character()
{
    delete[] this->materias;
    delete this->unequipMaterias;
    std::cout << "Character destructed" << std::endl;
}

std::string const & Character::getName() const
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

void Character::use(int idx, ICharacter& target)
{
    this->materias[idx]->use(target);
}