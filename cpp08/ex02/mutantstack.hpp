

#pragma once
#include <iostream>
#include <stack>

template <class T>

class MutantStack : public std::stack<T>
{
    public :
        MutantStack()
        {
            std::cout << "MutantStack Constructed !" << std::endl;
        }
        MutantStack(MutantStack const &src)
        {
            (std::stack<T>(src));
        }
        ~MutantStack()
        {
            std::cout << "MutantStack destructed !" << std::endl;

        };
        MutantStack &operator=(MutantStack const &src)
        {
            if (&src != this)
                std::stack<T>::operator=(src);
            return (*this);
        }

        typedef typename std::stack<T>::std::vector<T>::iterator iterator;
        iterator begin(){return this->c.begin();};
        iterator end(){return this->c.end();};
};