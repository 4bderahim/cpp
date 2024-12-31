#include "replace.hpp"


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
        int index = content.find(to_be_replaced, i);
        if (index == -1)
            break;
        else
        {
            content.erase(index, to_be_replaced.length());
            content.insert(index , string);
        }
    }
    file << content;
    file.close();
    return (1);
}

int main(int argc, char **argv)
{
    std::string hello;
    std::string content;
    std::filebuf *buf;
    char c;
    if (argc < 4 || !argv[1][0] || !argv[2][0]|| !argv[2][0] || !argv[3][0])
    {
        std::cout << "arguments error!!" << std::endl;
        return (1);
    }
    std::ifstream file (argv[1]);
    if (!file) 
    {
        std::cout << "[-] can't open file  '" << argv[1] << "'" << std::endl;
        return (1);
    }
    buf = file.rdbuf();
    c = buf->sbumpc();
    while (file.is_open() && c != EOF)
    {
        content += c;
        c = buf->sbumpc();
    }
    if (!replace_(argv[1],content ,argv[2],  argv[3]))
    {
        std::cout << "[-] Unknown error accured!!" << std::endl;
        file.close();
        return (1);
    }
    file.close();
    return (0);
}