
#include <iostream>
#include <vector>
#include <string.h>
#include <sstream>    
#include <cctype>  
#include <cstdlib>
#include <iomanip>

#pragma once
#ifndef __CONTACT_H__
#define __CONTACT_H__
class Contact
{
    private:
        std::string contact_name , contact_last_name, contact_nickname, contact_darkest_sec, phone_num;
        std::string get_phone_num(Contact contacts);
        // void get_contact_name(Contact contact, int  cmd);
        // void get_contact_lastname(Contact contact, int  cmd);
        // void get_contact_nickname(Contact contact, int  cmd);
        // void get_contact_darksec(Contact contact, int  cmd);

    public:
        void search(int index);
        void display_all_contact_info(int index);
};
#endif  