

#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();

const Animal* i = new Cat();
std::cout << meta->getType() << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound();

meta->makeSound();
// delete meta;
// delete i;
delete i;
return 0;
}