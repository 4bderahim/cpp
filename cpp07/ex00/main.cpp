
#include "template.hpp"

int main()
{

    
    std::cout  << " max >" << max(456.3, 8.8) << std::endl;
    std::cout  << " max >" << max(45, 88) << std::endl;
    std::cout  << " min >" << min(44.45, 8.8) << std::endl;
    std::cout  << " min >" << min(45, 88) << std::endl;

    int h = 9;
    int x = 2;
    max(h, x);
    swap(x, h);
    std::cout  << "swap  > h =" << h << "\t x = " << x  << std::endl;
}