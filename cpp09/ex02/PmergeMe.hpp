#pragma once

#include <iostream>
#include <unistd.h>
#include <limits>
    #include <vector>




class mergeme
{




    private:
        // std::vector<std::pair< unsigned int,unsigned int>> pairs;
        std::vector<unsigned int> bigs;
        std::vector<unsigned int> smalls;
        std::vector<unsigned int> final;
        unsigned int lonely;
    public:
        void pairing(int args, char **argv)
        {
            int i = 1;
            args--;
            if (args %2 !=0)
                {
                    lonely = std::atol(argv[0]);
                    i == 2;
                }
            while (i < args)
            {
                unsigned int first = std::atol(argv[i]);
                unsigned int sec = std::atol(argv[i+1]);
                bigs.push_back((first < sec ? sec:first));
                smalls.push_back((first < sec ? first:sec));
               
                i+=2;
            }
            // for (const auto& p : pairs) {
            //     std::cout << "(" << p.first << ", " << p.second << ")" << std::endl;
    }

        }

};