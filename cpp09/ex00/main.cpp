 #include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <algorithm>
// #include "BitcoinExchange.hpp"


int that_error(std::string error_msg)
{
    std::cout << error_msg << std::endl;

    return (0);
}
int check_file_data(std::string str, std::map<std::string , double> map)
{
    std::string value, date;
    std::string tmp = str;
    if (std::count(str.begin(), str.end(), '|') !=1)
        return (0);
    tmp = str.substr(0, str.find('|'));
    if (std::count(tmp.begin(), tmp.end(), '-') !=2)
        return (0);
    tmp.erase(std::remove(tmp.begin(), tmp.end(), ' '), tmp.end());
    date = tmp ;
    tmp.erase(std::remove(tmp.begin(), tmp.end(), '-'), tmp.end());
    
    if (tmp.find_last_not_of("0987654321") != std::string::npos)
        return (that_error( "[-] BAD input >>"+str));

    tmp =  str.substr(0, str.substr(0, str.find('|')).find('-')) ;
    
    if (tmp.length() > 4 || std::atoi(tmp.c_str() ) > 2025)
        return (that_error("[-] BIG year number >> "+str));
    tmp =  str;
    tmp.erase(std::remove(tmp.begin(), tmp.end(), ' '), tmp.end());
    tmp =  tmp.substr(tmp.find('-')+1,  tmp.find('|')) ;
    if (std::atoi(tmp.substr(0,  tmp.find('-')).c_str()) > 12)
        return (that_error("[-] month number error "+str));
    if (std::atoi(tmp.substr(tmp.find('-')+1,  tmp.find('|')).c_str()) > 31)
        return (that_error("[-] day error "+str));
    
    tmp = tmp.substr(tmp.find('|')+1,  tmp.length()-1);
    if (std::atoi(tmp.c_str()) > 1000 || std::atoi(tmp.c_str()) < 0)
        return (that_error("[-] value error "+str));
    
    if (map.find(date) == map.end())
        return 29;//
    value = tmp ;
    std::cout << date << "=>" << value << "=>" << map[date]*(std::atof(value.c_str())) << std::endl;
    
    return (1);
}

int check_first_line(std::string& str)
{
    str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
    if (str != "date|value")
        {
            // printf("[%s]", str.c_str());
            return 0;
        }
    return (2);
}



void  map_data(std::map<std::string , double> &data, std::string file)
{

    std::fstream f(file);
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
    // std::cout << argv[1] << std::endl;
    std::ifstream f(argv[1]);
    if (!f.is_open())
    {
        std::cout << "error opening the file!" << std::endl;
        return(1);
    }
    std::map<std::string, double> data;
     std::string str;
     int i = 0;
    //  str <<  f.rdbuf();
    map_data(data, "data.csv");
    while (getline(f, str)) 
    {
            // std::cout << str << std::endl;
            if ((!i && str.size()) && str.find_first_not_of(" ") != std::string::npos)
            {
                i=1;
                // continue;
                
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
                    // std::cout << "d|" << str<< "|" <<  std::endl;
                    i = 99;
                    
                    continue;
                }
                i++;
                
            }
            if (!check_file_data(str, data))
                {}// printf("\t{######}]\n");
        }
    f.close();
    
    return (1);
}