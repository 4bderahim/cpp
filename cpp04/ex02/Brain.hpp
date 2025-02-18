#pragma once
#include <iostream>


class Brain
{
    // protected:
    public:
        std::string ideas[100];
        Brain();
        ~Brain();
        Brain(const Brain &a);
        // Brain& operator=(const Brain &a);
        // Brain(std::string type);
        // virtual ~Brain();
        // virtual void makeSound() const;
        // std::string getType() const;                 
};