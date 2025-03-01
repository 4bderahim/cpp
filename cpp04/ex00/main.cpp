
#include "Dog.hpp"
#include "Cat.hpp"


void f()
{
    std::system("leaks -q poly");
}

int main()
{
    const Animal* meta = new Animal();

    const Animal* j    =    new Dog();
    const Animal* i    =    new Cat();
    std::cout << meta->getType() << std::endl;
    std::cout << "Doowgg >> :" << j->getType() << " " << std::endl;
    meta->makeSound();
    i->makeSound();
    j->makeSound();
    delete meta;
    delete j;
    delete i;
    atexit(f);
    return 0;
}
