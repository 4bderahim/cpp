
#include "serialize.hpp"

int main()
{
    Data data;
    
    serialize_ *d = reinterpret_cast<serialize_ *>(&data);
    (void)d;
    serialize_::deserialize(serialize_::serialize(&data));
    data.data_string = "aaaa";
    data.data_int = 100000;
    // ser.deserialize(ser.serialize(&data));
}

