#include <iostream>
#include <fstream>
#include <string>


int replace_(std::string old_fileName,std::string content, std::string to_be_replaced, std::string string)
{
    std::ifstream new_file;
    std::string new__file;
    new__file =  ".replace";
    new__file = old_fileName + ".replace";
    new_file.open(new__file);
    //
}
int main(int argc, char **argv)
{
    std::string hello;
    if (argc < 4)
    {
        std::cout << "arguments error!! " << std::endl;
        return (1);
    }
    std::ifstream file (argv[1]);
    if (file.is_open())
    {
        file >> hello;
    }
    else
        {
            std::cout <<  "error in file " << std::endl;
            return (1);
        }
    if (!replace_(hello, argv[2], argv[3]))
        return (1);
    std::cout << hello;
}