

#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* i = new Cat();
    std::cout << meta->getType() << std::endl;
    std::cout << "cat type:" << i->getType() << " " << std::endl;
    i->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
    return 0;
}