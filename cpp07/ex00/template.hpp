

#pragma once
#include <iostream>

template <typename T> 
T min(T x, T y)
{
    if (x < y)
        return (x);
    return (y);
}

template <typename T> 

void swap (T &first, T &sec)
{
    T tmp  = sec;

    sec  = first;
    first = tmp;
}

template <typename T> 
T max(T x, T y)
{
    if (x > y)
        return (x);
    return (y);
}