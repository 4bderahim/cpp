#include "rpn.hpp"

//$> ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
// int precedence(std::string f, std::string s )
// {
//     std::string pre = "*/-+" ;
//     if (pre.find_first_of(f)  < 2 && pre.find_first_of(s) > 1)
//         return (1);
//     return (-1);

// }
int op_size(std::string str)
{
    std::string nums = "0987654321";
    int count  = 0;
    for (size_t i = 0; i < str.length(); i++)
    {
        if ( nums.find_first_of(str[i]) != std::string::npos)
            count++;
    }
    return (count);

}
//  void fill_stack(std::string &operands, std::stack<std::string>  lifo_operators, std::string str)
//  {
//     std::string nums = "0987654321";
//     for (size_t i = 0; i < str.length(); i++)
//     {
//         if ( nums.find_first_of(str[i]) != std::string::npos)
//             operands +=  (str.substr(i, 1));
//         else
//         {
//             if (str[i] == ' ')
//                 continue;
//             if (lifo_operators.size() ==0)
//                 lifo_operators.push(str.substr(i, 1).c_str());   
//             else
//             {
//                 for (size_t j = 0; j <= lifo_operators.size(); j++)
//                 {  
//                     if (precedence(str.substr(i, 1), lifo_operators.top()) == 1)
//                     {
//                         lifo_operators.push(str.substr(i, 1).c_str());
//                         break;
//                     }
//                     else
//                     {
//                         operands +=  lifo_operators.top();
//                         lifo_operators.pop();
//                     }  
//                     if (lifo_operators.size() ==0)
//                         lifo_operators.push(str.substr(i, 1).c_str());   
//                 }
//             }         
//         }
//     }
//     for (size_t j = 0; j <= lifo_operators.size(); j++)
//     {
//         operands += lifo_operators.top();    
//         lifo_operators.pop();
//     }
//  }

 
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
    
    int count  = op_size(str);
    std::string operands;
    std::stack<std::string > lifo_operators;


    if (((std::count(str.begin(), str.end(), '-') 
    +std::count(str.begin(), str.end(), '+') 
    +std::count(str.begin(), str.end(), '*') 
    +std::count(str.begin(), str.end(), '/')   ) != (long int)count-1) || count == 1)
    {
        std::cout << "OPERATION ERROR!" << std::endl;
        return (1);
    }
    // fill_stack(operands, lifo_operators ,str);  

    rpn rpn;
    rpn.rpnn(str);
    
    


}
