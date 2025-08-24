#include <iostream>
#include <stack>
#include <algorithm>


//$> ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
 void fille_stack(std::stack<int> lifo, std::string str)
 {
    int i = 0;
    std::string nums = "0987654321";
    while (i < str.length())
    {
        if ( nums.find_first_of(str[i]) != std::string::npos)
        {
            while (i < str.length())
            {
                if ( nums.find_first_not_of(str[i]) != std::string::npos)
                i++;
            }
            

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
    // if (str.find_first_not_of("09876654321-+*/ ") 
    // || std::count(str.begin(), str.end(), '-'))

}