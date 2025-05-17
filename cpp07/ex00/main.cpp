
#include "template.hpp"

int main()
{
    std::cout  << " max >" << max(456.3, 8.8) << std::endl;
    std::cout  << " max >" << max(45, 88) << std::endl;
    // std::cout  << " max >" << max(4563, 88) << std::endl;
    // std::cout  << " max >" << max(456.3, 88) << std::endl;
    std::cout  << " min >" << max(44.45, 8.8) << std::endl;
    std::cout  << " min >" << max(45, 88) << std::endl;

    int h = 9;

    int g = 2;
    max(h, g);
    std::cout  << " swap >" << h << "|" << g  << std::endl;




}