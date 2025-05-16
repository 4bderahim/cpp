


#include "serialize.hpp"




int main()
{
    
    Data data;
    serialize_ ser;
    data.data_string  = "str";
    data.data_int =   1234;
    ser.deserialize(ser.serialize(&data));
}