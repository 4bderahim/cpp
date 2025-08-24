#include <iostream>

#include <stack>



int main(int argc , char **argv)
{

    if (argc != 2)
        {
            std::cout << "args error!" << std::endl;
            return (1);
        }
    std::string str = argv[1];
    if (str.find_first_not_of("09876654321-+*/ "))
        

}