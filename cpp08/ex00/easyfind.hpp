#include <iostream>




template <typename T>

int easyfind(T ints, int in)
{
    size_t t = sizeof(ints)/sizeof(int);
    size_t i = 0;
    while (i < t)
    {
        if (ints[i] == in)
            return (in);
        i++;
    }
    return (-1);
}



