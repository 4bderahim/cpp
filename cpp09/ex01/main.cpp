#include <iostream>
#include <stack>
#include <algorithm>


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
int main(int argc , char **argv)
{

    if (argc != 2)
        {
            std::cout << "args error!" << std::endl;
            return (1);
        }

    std::string str = argv[1];
    std::stack<int> lifo;
    fill_stack(lifo, str);
    std::size_t index;
    while (( index = str.find_first_of("0987654321")) != std::string::npos)
        {
            str.erase(index , 1);
        }
    
    str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
    // printf("\t\t\t>>>>%s]", str.c_str());

    int t = lifo.size();
    for (size_t i = 0; i < t ; i++)
    {
        printf("%d\n", lifo.top());
        lifo.pop();
    }
    

}





//  while (ii < str.length())
//             {
//                 std::size_t index;
//                 if (( index = tmp.find_first_not_of(nums)) != std::string::npos)
//                 {
//                     printf("\t[%s]%lu\n", str.substr(i, index).c_str(), index);
//                     // lifo.push(std::atoi(str.substr(i, index).c_str()));
//                     i += index;
//                     break;
//                 }
//                 ii++;
//             }