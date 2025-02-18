#include "Brain.hpp"


Brain::Brain()
{
    std::cout << "brain constructed !" << std::endl;
}


Brain::~Brain()
{
    std::cout << "brain destructed !" << std::endl;
}

Brain::Brain(const Brain &a)
{
    *this = a;
}
