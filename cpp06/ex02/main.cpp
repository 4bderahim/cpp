#include <cstdlib> 
// #include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    int random;

    random = (rand()) %3+1;
    if (random == 1)
        return (new A);
    if (random == 2)
        return (new B);
    if (random == 3)
        return (new C);
    return (NULL);
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "\nthe actual type of the object pointed to by p: 'A'" << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "\nthe actual type of the object pointed to by p: 'B'" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "\nthe actual type of the object pointed to by p: 'C'" << std::endl;
    else
        std::cout << "UNKNOWN OBJECT " << std::endl;
}

void identify(Base& p)
{
    try{
        A a = dynamic_cast<A&>(p);  
        std::cout << "the actual type of the object pointed to by p: 'A'" << std::endl;
        return ;
    }
    catch (std::bad_cast)
        {}
    try{
        B b = dynamic_cast<B&>(p);  
        std::cout << "the actual type of the object pointed to by p: 'A'" << std::endl;
        return ;
    }
    catch (std::bad_cast)
        {}
    try{
        C c = dynamic_cast<C&>(p);  
 
        std::cout << "the actual type of the object pointed to by p: 'A'" << std::endl;
        return ;
    }
    catch (std::bad_cast)
        {}
}


int main()
{
    
    Base *abc_ =  generate();
    identify(abc_);

    // ---------------------

    Base *abc =  generate();
    Base &t = *abc;
    identify(t);
    return (0);
}
