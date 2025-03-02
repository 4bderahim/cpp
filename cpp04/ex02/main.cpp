#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // const Animal* meta = new Animal(); // abstract class cannot be instantiated!
    const Animal* j = new Dog();
    const Animal* i = new Cat();    

    std::cout << "dog   >> " << i->getType() << " " << std::endl;
    std::cout << "Cat   >> " << j->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound(); 
    delete i;
    delete j;
    return 0;
}