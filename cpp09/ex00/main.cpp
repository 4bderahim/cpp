#include "BitcoinExchange.hpp"

int check_first_line(std::string& str)
{
    str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
    if (str != "date|value")
        return 0;
    return (2);
}
void  map_data(std::map<std::string , double> &data, std::string file)
{

    std::fstream f(file.c_str());
    std::string each_line;
    // no checks for database ,,..file should be perfect!
    while (getline(f, each_line))
    {
        data[each_line.substr(0, each_line.find(","))] = std::atof(each_line.substr( each_line.find(",")+1, each_line.length() ).c_str())  ;
    }
}

int main(int argc , char **argv)
{
    if (argc != 2)
    {
        std::cout << "args error !" << std::endl;
        return (1);
    }
    std::ifstream f(argv[1]);
    if (!f.is_open())
    {
        std::cout << "error opening the file!" << std::endl;
        return(1);
    }
    std::map<std::string, double> data;
     std::string str;
     int i = 0;
    map_data(data, "data.csv");
    BitcoinExchange b;
    while (getline(f, str)) 
    {
            if ((!i && str.size()) && str.find_first_not_of(" ") != std::string::npos)
            {
                i=1;
            }
            
            if (i ==1)
            {
                if (i == 1&& !check_first_line(str))
                {
                    std::cout << "the file data should start with 'date | value'!!" << std::endl;
                    return (1);
                }
                else
                {
                    i = 99;
                    continue;
                }
                i++;
                
            }
            if (!b.check_file_data(str, data))
                {}
        }
    f.close();
    
    return (1);
}