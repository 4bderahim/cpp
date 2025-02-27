
#include "Dog.hpp"
#include "Cat.hpp"




int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << meta->getType() << std::endl;
    std::cout << i->getType() << " " << std::endl;
    meta->makeSound();
    i->makeSound();
    j->makeSound();
    // delete meta;
    // delete i;
    std::system("leaks -q poly");
    // delete i;
    return 0;
}