// #include "cpp.h"
#include <iostream>
#include <vector>
#include <string.h>
class Contact
{
    public:
    std::string contact_name , contact_last_name, contact_nickname, contact_darkest_sec;
};

void print_info(std::string str)
{
    int i;
    i =0;

    while (str[i])
    {
        char c = str[i];
        std::cout << c;
        if (i == 8)
           { 
            std::cout << ".";
            break;
           }
        i++;
    }
}
// !empty || spaces 
// before search display status,, !only nums
// search displays infos separated by \n

class Phonebook
{
    public:
    Contact contacts[8];
    public:
    void add_contact(std::string contact_name,std::string contact_last_name,std::string contact_nickname, std::string contact_darkest_sec, int index)
    {
        contacts[index].contact_name = contact_name;
        contacts[index].contact_last_name = contact_last_name;
        contacts[index].contact_nickname = contact_nickname;
        contacts[index].contact_darkest_sec = contact_darkest_sec;
    }
    public:
    void search(int index)
    {
        std::cout << index;
        std::cout << "|";
        print_info(contacts[index].contact_name);
        std::cout << "|";
        print_info(contacts[index].contact_last_name);
        std::cout << "|";
        print_info(contacts[index].contact_nickname);
        std::cout << "\n";
    }
};
std::string new_entry(std::string order)
{
    std::string new_;
    using namespace std;
    std::cout << "enter " << order << ":";
    getline(cin, new_);
    return (new_);
}
using namespace std;

int main()
{
    std::vector<std::string> alo;
    int index_count;
    index_count = 0;
    Phonebook phonebook;
    while (1)
    {
        std::string cmd;
        std::cout << "|>";
        std::getline(cin, cmd);
        if (!cmd.compare("SEARCH"))
        {
            int i;
            using namespace std;
            while(1)
            {
                std::cout << "enter contact index(0~7):";
                std::cin >> i;
                //get line
                if (i > 7 || i < 0)
                    break;
                phonebook.search(i);
            }
        }
        if (!cmd.compare("ADD"))
        {
            std::string contact_name ,contact_last_name, contact_nickname, contact_darkest_sec;
            phonebook.contacts[index_count].contact_name = new_entry("contact_name");
            phonebook.contacts[index_count].contact_last_name = new_entry("contact_last_name");
            phonebook.contacts[index_count].contact_nickname = new_entry("contact_nickname");
            phonebook.contacts[index_count].contact_darkest_sec = new_entry("contact_darkest_sec");
            index_count++;
        }
        if (!cmd.compare("EXIT"))
            break;
    }
}