#include <iostream>
#include <fstream>
#include <string>

int replace_(std::string old_fileName,std::string content, std::string to_be_replaced, std::string string)
{
    int i = 0 ;
    std::string new__file;
    new__file =  ".replace";
    new__file = old_fileName + ".replace";
    std::ofstream file (new__file);
    if (file.fail())
        return (0);
    while (1)
    {
        int index = content.find(to_be_replaced, i+1);
        if (index == -1)
        {
            file << content.substr(i , (content.length()-1));
            break;
        }
        else
        {
            file << content.substr(i , index);
            file << string;
            i = index+to_be_replaced.length();
        }
    }
    file.close();
    return (1);
}

int main(int argc, char **argv)
{
    std::string hello;
    std::string content;
    if (argc < 4)
    {
        std::cout << "arguments error!!" << std::endl;
        return (1);
    }
    std::ifstream file (argv[1]);
    if (!file)
    {
        std::cout << "[-] file doesn't exist!";
        return (1);
    }
    while (file.is_open() && std::getline(file, hello))
        content += hello + "\n"
        ;
    if (!replace_(argv[1],content ,argv[2],  argv[3]))
    {
        std::cout << "[-] Unknown error accured!!" << std::endl;
        file.close();
        return (1);
    }
    file.close();
    return (0);
}