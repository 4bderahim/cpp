

#pragma once
#include <iostream>
#include <stack>

template <class T>
class MutantStack : public std::stack <T>
{
    public :
        MutantStack(){};
        MutantStack(MutantStack const &src):std::stack<T>(src){};
        ~MutantStack(){};
        MutantStack &operator=(MutantStack const &src){
            if (&src != this)
                std::stack<T>::operator=(src);
            (void)src;
            return (*this);
        };
        typedef typename std::deque<T>::iterator iiterator;
        iiterator begin(){return this->c.begin();};
        iiterator end(){return this->c.end();};
};