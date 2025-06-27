#pragma once
#include <iostream>
#include <vector>


#include <exception>

class maxsize : public std::exception
{
    public:
        const char *what() const throw()
        {
            return ("*maxsize exception *");
        }
};

class Span
{
    private:
        std::vector<int> ve;
        unsigned int N;
        maxsize max;
    public:
        Span(): N(0)
        {
            ve.reserve(N);
            std::cout << "Span constructed !!" << std::endl;
        }
        Span(unsigned int n)
        {
            ve.reserve(N);
            std::cout << "Span constructed !!" << std::endl;

        }
        ~Span()
        {
            std::cout << "Span destructed !!" << std::endl;
        }
        Span(const Span &s);
        Span &operator=(const Span &sp)
        {

        }
        void addNumber(int toadd)
        {
            if (ve.size() > (size_t)N)   
                throw max; 
            ve.push_back(toadd);
        }   
        int ongestSpan()
        {
            std::vector<int> t = ve;
            sort(t.begin(), t.end());
            return (t.end() - t.begin());   
        }
        int shortestSpan()
        {
            std::vector<int> t = ve;
            sort(t.begin(), t.end());
            if (t.size() == 2)
                return (t.end() - t.begin());
            std::vector<int>::iterator it;
            int short_ = 0;
            for (it = t.begin()+1; it != t.end(); it++)
            {
                if (( it-1 - it) < short_)
                    short_ = ( (it-1) - it);
            }
            return (*it);
        }
        template <typename T> void addSeqNumbers(T *begin, T *last)
        {
            if ((((unsigned int)last) - (unsigned int)begin)+ ve.size() > N)
                throw max
            while (begin != last)
            {
                ve.push_back(*begin);
                begin++;
            }
        }
};