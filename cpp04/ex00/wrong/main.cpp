

#include "WrongCat.hpp"

int main()
{
    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* i = new WrongCat();
    std::cout << meta->getType() << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
    return 0;
}