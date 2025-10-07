#include "rpn.hpp"

//$> ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
int precedence(std::string f, std::string s )
{
    std::string pre = "*/-+" ;
    std::cout << f << "|" << s << std::endl;
    if (pre.find_first_of(f)  < 2 && pre.find_first_of(s) > 1)
        return (1);
    printf("-1");
    return (-1);

}
 void fill_stack(std::string &operands, std::stack<std::string>  lifo_operators, std::string str)
 {
    // int i = str.length();
    std::string nums = "0987654321";
    // for (int i =  str.length(); i >= 0; i--)
    for (size_t i = 0; i < str.length(); i++)
    {
        if ( nums.find_first_of(str[i]) != std::string::npos)
        {
            operands +=  (str.substr(i, 1));
            // lifo.push(std::atoi(str.substr(i, 1).c_str()));
        }
        else
        {
            printf("\t|%s|\n", str.substr(i, 1).c_str());
            // if (str[i] == ' ')
            //     continue;
            if (lifo_operators.size() ==0)
                lifo_operators.push(str.substr(i, 1).c_str());   
            else
            {
                if (precedence(str.substr(i, 1), lifo_operators.top()) == 1)
                    lifo_operators.push(str.substr(i, 1).c_str()); 
                else
                {
                    operands +=  lifo_operators.top();
                    lifo_operators.pop();
                }  
            }         
        }
    }
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
    
    // std::stack<std::string > lifo_operands;
    std::string operands;
    std::stack<std::string > lifo_operators;

    fill_stack(operands, lifo_operators ,str);  

    printf("\t[%s]", operands.c_str());

    // if (((std::count(str.begin(), str.end(), '-') 
    // +std::count(str.begin(), str.end(), '+') 
    // +std::count(str.begin(), str.end(), '*') 
    // +std::count(str.begin(), str.end(), '/')   ) != (long int)lifo.size()-1) || lifo.size() == 1)
    // {
    //     std::cout << "OPERATION ERROR!" << std::endl;
    //     return (1);
    // }
    // std::size_t index;
    // while (( index = str.find_first_of("0987654321")) != std::string::npos)
    //     {
    //         str.erase(index , 1);
    //     }
    // str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
    // // printf("\t\t\t>>>>%s]", str.c_str());
    // rpn rpn;
    // rpn.rpnn(lifo, str);
    
    


}
