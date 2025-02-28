
#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "brain constructed !" << std::endl;
}

Brain::~Brain()
{
    std::cout << "brain destructed !" << std::endl;
}


Brain& Brain::operator=(const Brain &a)
{
    if (this != &a)
        {
            for (int i = 0; i < 100; i++)
                this->ideas[i] =  a.ideas[i]; 
        }
    return (*this);
}


Brain::Brain(const Brain &a)
{
    *this = a;
}
