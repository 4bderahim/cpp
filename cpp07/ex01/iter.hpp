
#pragma once
#include <iostream>

template <typename T> 

void iter_(T *array, size_t size, void (*func)(T arg))
{
    if (array == NULL || size <= 0)
        return ;
    size_t i = 0;
    while (i < size)
    {
        func(array[i]);
        i++;
    }
}