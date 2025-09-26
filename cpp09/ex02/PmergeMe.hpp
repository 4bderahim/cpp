#pragma once
#include <iostream>
#include <unistd.h>
#include <limits>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>

class mergeme
{
    private:
        std::vector<unsigned int> seq;
    public:
        mergeme()
        {
            //std::cout << "mergme constructed" << std::endl;
        }
        ~mergeme()
        {
            // std::cout << "destructed !" << std::endl;
        }
        std::vector<unsigned int> get_seq(){return (this->seq);}
        mergeme(const mergeme& obj)
        {
            *this = obj;
        }
        
        const mergeme &operator=(const mergeme& m)
        {
            (void)m;
            return *this;
        }

        std::vector<unsigned int> generateJacobstahl(unsigned int n)
        {
            std::vector<unsigned int> jacobstahl;
            jacobstahl.push_back(0);
            if (n == 1) 
                return jacobstahl;
                // printf("\t####");

            jacobstahl.push_back(1); 
            for (unsigned int i = 2; i < n; ++i) {
                unsigned int next = jacobstahl[i - 1] + 2 * jacobstahl[i - 2];
                jacobstahl.push_back(next);
            }
            this->seq = jacobstahl;

            return this->seq;
        }
        template<typename Container>
        std::vector<unsigned int> Mr_fordJohnson(Container cont)
        {
            std::vector<unsigned int> sorted;

            if (cont.size() <= 1 )// stack Hero
                {
                    // create a vector NONPAIRED
                    // to return 
                    if (cont[0].first > cont[0].second)
                        std::swap(cont[0].first, cont[0].second);
                    sorted.push_back(cont[0].first);
                    sorted.push_back(cont[0].second);
                    return sorted;

                }
            size_t i = 0;
            // Container  smalls;
            Container  bigs;
            // Pairing       pair;
            
            // int lonely = -1;
            // size_t sizee = cont.size();
            // if (sizee %2 != 0)
            // {
            //     lonely  = cont.back();
            //     cont.erase(cont.end()-1);
            // }

            while (i < cont.size())
            {
                if (cont[i].first > cont[i].second)
                    std::swap(cont[i].first, cont[i].second);
                std::cout << "+" <<  cont[i].first << "|" << cont[i].second << "+";
                

                i++;   
            }
    printf("\n");
            
            i = 0;
            while (i < cont.size()-1)
            {

                 std::cout << "----#>" << cont[i].second << std::endl;  
                std::cout << "---->" << cont[i].first << "~" << cont[i].second <<  "||" << cont[i+1].first << "~" << cont[i+1].second << std::endl;
                bigs.push_back(std::make_pair(cont[i].second , cont[i+1].second));
                // unsigned int first = cont[i];
                // unsigned int sec = cont[i+1];
                // unsigned int small = (first < sec ? first:sec);
                // unsigned int big = (first < sec ? sec:first);
                // pair.push_back(std::make_pair(small , big));
                // bigs.push_back(big);
                // smalls.push_back(small);
                i +=2;
            }

            // for (size_t i = 0; i < pair.size(); i++)
            // {
            //     std::cout << ">>>||>" <<  pair[i].first<<"|"<< pair[i].second << std::endl;
            // }
            

            // if (lonely != -1)
            //     bigs.push_back(lonely);
            sorted = Mr_fordJohnson(bigs);// do the same to the smalls ,, to split emm again.


            i = 0;

            printf("\n------------------------------------------\n");
            std::cout << sorted[0] << ">>>" << sorted[1] << std::endl;

            while (i < cont.size())
            {
                std::cout << "\t\t\t[" <<  cont[i].first << "-" << cont[i].second << "]";
            
                i++;
            }
            printf("\n------------------------------------------\n");

            
            // size_t seq_pos = 0;
            // i = 0;

            // int next_round=  0;
            // while (seq_pos< this->seq.size())
            // {
            //     i = 0;
            //     unsigned int last_inserted_index = 0;
            //     unsigned int small_toinsert = smalls[seq_pos];
            //     unsigned int bigger_bound = 0;
            //     unsigned int low_bound = 0;
            //     next_round++;
            //     // looking for the bigger bound;
            //     for (size_t small_big_pair_index = 0; small_big_pair_index < pair.size(); small_big_pair_index++)
            //     {
            //         if (pair[small_big_pair_index].first == small_toinsert)
            //             break;//for good.
            //     }
            //     //looking for smaller bound ,,,,, only if its less than To_insert else >> jacob will do it

            //     if (small_toinsert > last_inserted)
            //     {
            //         for (size_t i = 0; i < count; i++)
            //         {
            //             /* code */
            //         }
                    

            //         low_bound = ;
            //     }
            //     else
            //         low_bound = last_inserted_index;


            //     if (next_round == 2)// i%2 != 0 ???
            //     {
            //         for (size_t last_seq = this->seq[seq_pos-1]+1 ; last_seq < this->seq[seq_pos]; last_seq++)
            //         {
                        
            //         }
            //         next_round = 0;
            //     }

            //     seq_pos++;
            // }
            
            // // insert smalls to bigs(thatShouuld be sorted)
            // // unsigned int prev = 0;
            // printf("\t\t\t[%zu]<---------", this->seq.size());
        //  size_t t = 0;
         
            // while (i < this->seq.size())
            // {
            //     size_t ii = 0;
            //     while (ii < bigs.size())
            //     {
            //         // seq.rbegin().
            //         std::cout << "-----" << *(smalls.rbegin()-(smalls.size()-i)-1)<< "##" <<  std::endl;
            //         // printf("\t\t==%u||%u<<",smalls.rbegin()-(smalls.size()-i), smalls.rend()+prev);
            //         typename Container::reverse_iterator it = std::lower_bound(smalls.rbegin()-(smalls.size()-i), smalls.rend()+prev, bigs[ii]);
            //         typename Container::iterator forw = it.base();
            //         smalls.insert(forw, bigs[ii]);
            //         ii++;
            //     }
            //     prev = i;
            //     i++;
            // }
            
            return (sorted);// sortedd
        }
};

