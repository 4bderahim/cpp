#include "Contacts.hpp"


#pragma once
#ifndef ___PHONE___
#define ___PHONE___

class Phonebook
{
    private:
        Contact contacts[8];
        void print_info(std::string str);
    public:
        int fill_attr(Phonebook *phonebook, int index_count);
        Contact get_contact(Phonebook phone, int index);
        void search(Phonebook phone,  int index);
        int display_stat(Phonebook  phonebook , int count );

        void display_all_contact_info(Phonebook phone, int index);
};

#endif