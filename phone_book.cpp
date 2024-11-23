// #include "cpp.h"
#include <iostream>
#include <vector>
#include <string.h>
class Contact
{
    public:
    std::string contact_name , contact_last_name, contact_nickname, contact_darkest_sec;
};

class Phonebook
{
    // std::vector<std::string> alo;
    // std::string contact_name , contact_last_name, contact_nickname, contact_darkest_sec;
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
        std::cout << contacts[index].contact_name;
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
int main()
{
    std::vector<std::string> alo;
    int index_count;
    index_count = 0;
    Phonebook phonebook;
    using namespace std;
    while (1)
    {
        std::string cmd;
        std::cout << "|>";
        getline(cin, cmd);
        if (!cmd.compare("SEARCH"))
        {
            int index;
            int i;
            std::cout << "enter contact index:";
            std::cin >> i;
            if (index > 7 || index < 0)
                break;
            phonebook.search(index);
        }
        if (!cmd.compare("ADD"))
        {
            std::string contact_name , contact_last_name, contact_nickname, contact_darkest_sec;
            phonebook.contacts[index_count].contact_name = new_entry("contact_name");
            phonebook.contacts[index_count].contact_last_name = new_entry("contact_last_name");
            phonebook.contacts[index_count].contact_nickname = new_entry("contact_nickname");
            phonebook.contacts[index_count].contact_darkest_sec = new_entry("contact_darkest_sec");
            index_count++;
            break;
        }
        if (!cmd.compare("EXIT"))
            break;
        std::cout << "\n" << cmd << "\t" << alo[1];
    }
}