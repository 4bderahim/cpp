#include <iostream>
#include <stack>
#include <algorithm>


//$> ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
 void fill_stack(std::stack<int> lifo, std::string str)
 {
    int i = 0;
    std::string nums = "0987654321";
    while (i < str.length())
    {
        if ( nums.find_first_of(str[i]) != std::string::npos)
        {
            lifo.push(std::atoi(str.substr(i, 1).c_str()));
        }
        i++;
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
    // if (str.find_first_not_of("09876654321-+*/ ") 
    // || std::count(str.begin(), str.end(), '-'))

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