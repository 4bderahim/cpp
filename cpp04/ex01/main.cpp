
#include "Dog.hpp"
#include "Cat.hpp"
int main()
{
    // const Animal *l[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     if (i < 5)
    //         l[i] =  new Dog(); 
    //     else
    //     {
    //         l[i] = new Cat();
    //     }
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     delete l[i];
    // }
    const Animal copyConstructorTest = Animal();
    const Animal aa = Animal(copyConstructorTest);
    
    (void) aa;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;
    std::system("leaks -q poly");

}