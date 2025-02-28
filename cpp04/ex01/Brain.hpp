#pragma once
#include <iostream>


class Brain
{
    public:
        std::string ideas[100];
        Brain();
        ~Brain();
        Brain(const Brain &a);
        Brain& operator=(const Brain &a);
};