#pragma once

#include <iostream>


// data structer

typedef struct data_
{
   std::string data_string;
    int data_int;
}Data;


//serlialize class
class serialize_
{
    private:
        serialize_();
    public:
        // ~serialize_();
        // serialize_(const serialize_ &s);
        // serialize_ & operator=(const serialize_ &s);
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

};