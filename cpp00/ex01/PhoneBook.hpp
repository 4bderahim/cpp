#include "contacts.hpp"
#ifndef ___PHONE___
#define ___PHONE___
class Phonebook
{
    public:
    Contact contacts[8];
    void search(int index);
    void print_info(std::string str);
    void display_all_contact_info(int index);
};
#endif