#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    std::string hello;
    if (argc < 4)
    {
        std::cout << "arguments error!! " << std::endl;
    }
    std::ifstream file (argv[1]);
    if (file.is_open())
    {
        file >> hello;
    }
    std::cout << hello;
}