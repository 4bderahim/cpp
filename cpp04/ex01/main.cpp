
#include "Dog.hpp"
#include "Cat.hpp"



int main()
{
    const Animal *l[10];
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            l[i] =  new Dog(); 
        else
        {
            l[i] = new Cat();
        }
    }
    for (int i = 0; i < 10; i++)
    {
        delete l[i];// 
    }
    
}