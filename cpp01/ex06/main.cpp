#include "harl.hpp"



int main()
{
    Harl ha;
    std::cout  << "WARNING LEVEL AND ABOVE:" << std::endl;
    ha.complain("warning");
    std::cout  << "\nERROR LEVEL AND ABOVE:" << std::endl;
    ha.complain("error");
    std::cout  << "\nDEBUG LEVEL AND ABOVE:" << std::endl;
    ha.complain("debug");
    std::cout  << "\nERROR LEVEL AND ABOVE:" << std::endl;
    ha.complain("error");
    return (0);
}