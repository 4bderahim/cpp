
#pragma once
#include <iostream>

template <typename T> 

void iter(T *array, size_t size, void (* func)(const T &))
{
    if (array == NULL || func == NULL || size <= 0)
        return ;
    size_t i = 0;
    while (i < size)
    {
        func(array[i]);
        i++;
    }
}

