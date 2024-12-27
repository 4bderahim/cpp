#include <iostream>

int main()
{

    std::string str;
    std::string *stringPtr;
    std::string &stringRef = str;
    str = "HI THIS IS BRAIN";
    
    stringPtr = &str;
    std::cout << "The memory address of the string variable  : " << &str << std::endl;
    std::cout << "The memory address held by stringPTR       : " << stringPtr <<  std::endl;
    std::cout << "The memory address held by stringREF       : " << &stringRef  << std::endl;
    std::cout  << std::endl;
    std::cout << "The value of the string variable           : " << str  << std::endl;
    std::cout << "The value pointed to by stringPTR          : " << *stringPtr  << std::endl;
    std::cout << "The value of the string stringREF          : " << str  << std::endl;
}