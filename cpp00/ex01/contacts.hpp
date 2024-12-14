
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
        std::string contact_name, contact_last_name, contact_nickname, contact_darkest_sec, phone_num;
        int length;
        // void get_contact_name(Contact contact, int  cmd);
        // void get_contact_lastname(Contact contact, int  cmd);
        // void get_contact_nickname(Contact contact, int  cmd);
        // void get_contact_darksec(Contact contact, int  cmd);
    public:
        
        int fill(Contact contact);
        void set_contact_phone_num(std::string str);
        void set_contact_name(std::string str);
        void set_contact_last_name(std::string str);
        void set_contact__nickname(std::string str);
        void set_contact_darkest_sec(std::string str);


        std::string get_contact_phone_num(Contact contact);
        std::string get_contact_name(Contact contact);
        std::string get_contact_last_name(Contact contact);
        std::string get_contact_nickname(Contact contact);
        std::string get_contact_darkest_sec(Contact contact);
        std::string contact_(Contact);
};
#endif  