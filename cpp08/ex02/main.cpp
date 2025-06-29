#include "mutantstack.hpp"

int main()
{
    MutantStack<int> t;
    t.push(1);
    t.push(11);
    t.push(31);
    t.push(13);
    MutantStack<int>::iiterator o;

    // o.begin();
    // (void)o;

    for (o = t.begin(); o != t.end(); o++)
    {
        std::cout << *o << std::endl;

    }
    MutantStack<int> tt;
    tt = t;
    for (o = tt.begin(); o != tt.end(); o++)
    {
        std::cout << *o << std::endl;

    }


    


// return 0;
}