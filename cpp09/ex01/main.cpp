#include "rpn.hpp"

//$> ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
 void fill_stack(std::stack<int> &lifo, std::string str)
 {
    // int i = str.length();
    std::string nums = "0987654321";
    for (int i =  str.length(); i >= 0; i--)
    {
        if ( nums.find_first_of(str[i]) != std::string::npos)
        {
            lifo.push(std::atoi(str.substr(i, 1).c_str()));
        }
    }
    
 }

 int op(int f, int s ,char o)
 {
    if (o == '+')
        return (f+s);
    if (o == '-')
        return (f-s);
    if (o == '*')
        return (f*s);
    return (f/s);
 }


int main(int argc , char **argv)
{
    if (argc != 2)
        {
            std::cout << "args error!" << std::endl;
            return (1);
        }
    std::string str = argv[1];
    if (str.find_first_not_of("098765432 *-+/1") != std::string::npos)
    {
        std::cout << " error!" << std::endl;
        return (1);
    }
    std::stack<int> lifo;
    fill_stack(lifo, str);  
    if (((std::count(str.begin(), str.end(), '-') 
    +std::count(str.begin(), str.end(), '+') 
    +std::count(str.begin(), str.end(), '*') 
    +std::count(str.begin(), str.end(), '/')   ) != (long int)lifo.size()-1) || lifo.size() == 1)
    {
        std::cout << "OPERATION ERROR!" << std::endl;
        return (1);
    }
    std::size_t index;
    while (( index = str.find_first_of("0987654321")) != std::string::npos)
        {
            str.erase(index , 1);
        }
    str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
    // printf("\t\t\t>>>>%s]", str.c_str());
    rpn rpn;
    rpn.rpnn(lifo, str);
    
    


}
