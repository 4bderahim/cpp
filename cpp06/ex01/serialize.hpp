#include <iostream>



typedef struct data_
{
    int data_int;
    std::string data_string;
}Data;

class serialize_
{
    private:
        //
    public:
        serialize_();
        ~serialize_();
        serialize_(const serialize_ &s);
        serialize_ & operator=(const serialize_ &s);
        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);

};