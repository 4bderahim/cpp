#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <algorithm>



class BitcoinExchange

{
    private:
    //

    public:
        BitcoinExchange()
        {
            // std::cout << "BitcoinExchange constructed " << std::endl;
        }
        ~BitcoinExchange()
        {
            // std::cout << "BitcoinExchange destructed " << std::endl;
        }
        BitcoinExchange(const BitcoinExchange &btc)
        {
            *this    = btc;
        }

        const BitcoinExchange &operator=(const BitcoinExchange &b)
        {

            (void) b;
            return (*this);
        }
            
        int that_error(std::string error_msg)
        {
            std::cout << error_msg << std::endl;

            return (0);
        }

        int check_file_data(std::string str, std::map<std::string , double> map)
        {
            std::string value, date;
            std::string tmp = str;
            // printf("\t[%s]", str.c_str());
            
            if (tmp.find_first_of("0987654321-|") == std::string::npos)
                return 0;
            if (std::count(str.begin(), str.end(), '|') !=1 || std::count(str.begin(), str.end(), '.') !=1)
                {
                    return (that_error( "[-] BAD input >>"+str));
                    return (0);
                }
            tmp = str.substr(0, str.find('|'));
            if (std::count(tmp.begin(), tmp.end(), '-') !=2)
                {
                    return (that_error( "[-] BAD input >>"+str));
                    return (0);
                }
            
            
            tmp.erase(std::remove(tmp.begin(), tmp.end(), ' '), tmp.end());





            
            size_t i= tmp.find('-');
            i++;
            std::string s = tmp.substr(i, 2);
            if (s[1] == '-')
                {
                    tmp.insert(tmp.find('-')+1,1, '0');
                }
            if(tmp.substr(tmp.find_last_of("-")+1 ,2).size() == 1)
                tmp.insert(tmp.find_last_of("-")+1,1, '0');

            date = tmp;
            tmp.erase(std::remove(tmp.begin(), tmp.end(), '-'), tmp.end());
            if (tmp.find_last_not_of("0987654321") != std::string::npos)
                return (that_error( "[-] BAD input >>"+str));
            tmp =  str.substr(0, str.substr(0, str.find('|')).find('-')) ;
            if (tmp.length() > 4 || std::atoi(tmp.c_str() ) > 2025)
                return (that_error("[-] BIG year number >> "+str));
            tmp =  str;
            tmp.erase(std::remove(tmp.begin(), tmp.end(), ' '), tmp.end());
            tmp =  tmp.substr(tmp.find('-')+1, tmp.find('|')) ;
            if (std::atoi(tmp.substr(0, tmp.find('-')).c_str()) > 12 || std::atoi(tmp.substr(0,  tmp.find('-')).c_str()) <= 0)
                return (that_error("[-] month number error "+str));
            if (std::atoi(tmp.substr(tmp.find('-')+1,  tmp.find('|')).c_str()) > 31 || std::atoi(tmp.substr(tmp.find('-')+1, tmp.find('|')).c_str()) <= 0)
                return (that_error("[-] day error "+str));
            if (std::atoi(tmp.substr(0,  tmp.find('-')).c_str()) == 2 &&  std::atoi(tmp.substr(tmp.find('-')+1,  tmp.find('|')).c_str()) > 29)
                return (that_error("[-] day error "+str));
            tmp = str.substr(str.find('|')+1,  str.length()-1);
            if (std::atoi(tmp.c_str()) > 1000 || std::atoi(tmp.c_str()) < 0)
                return (that_error("[-] value error "+str));
            if (map.find(date) == map.end())
                {
                    int l = 300000000;
                    std::string date_to_use;
                    std::map<std::string, double>::const_iterator prv;
                     for (std::map<std::string, double>::const_iterator it = map.begin(); it != map.end(); ++it) {
                    {
                        date.erase(std::remove(date.begin(),date.end(), '-'), date.end());
                        int date_ = std::atoi(date.c_str());

                        std::string s = it->first;
                        s.erase(std::remove(s.begin(),s.end(), '-'), s.end());
                        int d = std::atoi(s.c_str());
                        if (d < date_)
                            { 
                                if(l > date_ - d) 
                                    {
                                        l = date_ - d;
                                        date_to_use = it->first;
                                    }
                            }
                    }
                    if (l == 300000000)
                        {
                            printf("\t\t#####%s######\n", str.c_str());
                        return (29);
                        }
                }
                date = date_to_use;
                }
            value = tmp ;
            std::cout << date << "=>" << std::atof(value.c_str()) << "=>" << map[date]*(std::atof(value.c_str())) << std::endl;
            
            return (1);
        }




};