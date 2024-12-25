#include "harl.hpp"



int main()
{
    Harl ha;
    std::cout  << "WARNING LEVEL:" << std::endl;
    ha.complain("warning");
    std::cout  << "\nERROR LEVEL:" << std::endl;
    ha.complain("error");
    std::cout  << "\nDEBUG LEVEL:" << std::endl;
    ha.complain("debug");
    std::cout  << "\nERROR LEVEL:" << std::endl;
    ha.complain("error");
    return (0);
}