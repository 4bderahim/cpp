

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
            // (void)src;
            return (*this);
        };
        typedef typename std::stack<T>::container_type::iterator iterator;
        // typedef typename std::deque<int>::iterator iterator;
        iterator begin(){return this->c.begin();};
        iterator end(){return this->c.end();};
};