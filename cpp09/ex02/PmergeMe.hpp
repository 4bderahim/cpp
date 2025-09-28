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
            std::vector<unsigned int> jacobstahl_insert;
            jacobstahl.push_back(0);
            if (n == 1)
                return jacobstahl;
                // printf("\t####");
            jacobstahl.push_back(1);
            // unsigned int prev;
            int d = 0;
            for (unsigned int i = 2; i < n; ++i) {
                
                unsigned int next = jacobstahl[i - 1] + 2 * jacobstahl[i - 2];


                // save code in insertion logiccc ;)
                if (next >= 3)
                {
                    for (size_t ii = jacobstahl[jacobstahl.size()-2]+1; ii < jacobstahl[jacobstahl.size()-1]; ii++)
                    {
                        std::cout << jacobstahl[jacobstahl.size()-2] <<"+++++++++"<< jacobstahl[jacobstahl.size()-1]  << "|<<" << std::endl;
                        jacobstahl_insert.push_back(ii);
                    }
                }
                jacobstahl.push_back(next);
                jacobstahl_insert.push_back(next);

                d++;
                // prev =  next;
            }
            this->seq = jacobstahl_insert;
            for (size_t i = 0; i < this->seq.size(); i++)
            {
                std::cout << this->seq[i] << "|<<" << std::endl;
            }
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

                //  std::cout << "----#>" << cont[i].second << std::endl;  
                // std::cout << "---->" << cont[i].first << "~" << cont[i].second <<  "||" << cont[i+1].first << "~" << cont[i+1].second << std::endl;
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

            




            size_t seq_pos = 00;
            i = 0;
            unsigned int high_bound = 0;
            unsigned int low_bound = 0;
            // unsigned int last_inserted_index = 0;
            // int next_round=  0;
            while (seq_pos< sorted.size())
            {
                if (seq_pos >= 5)
                {
                    high_bound =  cont[seq_pos].second;
                    low_bound = seq_pos-1; //
                    if (cont[low_bound].second > cont[seq_pos].first)
                    {
                        // reverse,,, from lowerBBound to 000;
                        auto it = std::lower_bound(cont.rbegin()+(cont.size() -low_bound ), cont.rend(), cont[seq_pos].first);
                        sorted.insert(it, cont[seq_pos].first);
                    }
                    else
                    {
                        //forward , from lowerbbound to high__bound
                        sorted.insert(std::lower_bound(cont.rbegin()+low_bound, cont.begin()+high_bound, cont[seq_pos].first), cont[seq_pos].first);

                    }
                    // sorted.inser(std::lower_bound(cont.begin(), cont.begin()+seq_pos, ));
                }
                else
                    sorted.insert(std::lower_bound(cont.begin(), cont.begin()+seq_pos, cont[seq_pos].first), cont[seq_pos].first);

                seq_pos++;

            }


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

