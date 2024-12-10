// #include "cpp.h"
#include "contacts.hpp"
#include "phone_book.hpp"

void Phonebook::print_info(std::string str)
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

void Phonebook::search(int index)
{
    std::cout << index;
    std::cout.width(55); std::cout << "|" << std::right;
    print_info(contacts[index].contact_name);
    std::cout << "|";
    print_info(contacts[index].contact_last_name);
    std::cout << "|";
    print_info(contacts[index].contact_nickname);
    std::cout << "\n";
}

void Phonebook::display_infos(int index)
{
    std::cout << "\nphone number      :" << contacts[index].phone_num << std::endl;
    std::cout << "first name          :" << contacts[index].contact_name << std::endl;
    std::cout << "last name           :" << contacts[index].contact_last_name << std::endl;
    std::cout << "nickname            :" << contacts[index].contact_nickname << std::endl;
    std::cout << "contact_darkest_sec :" << contacts[index].contact_name << std::endl;
}
std::string new_entry(std::string order)
{
    std::string new_;
    using namespace std;
    std::cout << "enter " << order << ":::";
    getline(cin, new_);
    if (cin.eof() || cin.fail() || cin.bad())
        {
            std::cout << "error eof";
            exit(1);
        }
    return (new_);
}

void display_stat(Phonebook  phone, int count )
{
    std::cout << "\n\n";
    for (int i = 0; i < count ;i++)
        phone.search(i);
    std::cout << "\n";
}

std::string check_num(std::string str)
{
    for (size_t i = 0; i < std::strlen(str.c_str()); i++)
    {
        if (isalpha(str[i]))
            return ("");
    }
    return (str);
}

int main()
{
    std::vector<std::string> alo;
    // using namespace std;
    int index_count , contacts_count;
    index_count = 0;
    contacts_count = 0;
    Phonebook phonebook;
    std::cout << "\nADD     : add new contact\nSEARCH  : search for an existing contact\nEXIT    : exit prompt\n\n\n" << std::endl; 
    while (1)
    {
        std::string cmd;
        using namespace std;
        std::cout << "type command >>";
        std::getline(cin, cmd);
        if (cin.eof() || cin.fail())
            exit(1);
        if (!cmd.compare("SEARCH"))
        {
            std::string search_;
            display_stat(phonebook, contacts_count);
            while(1)
            {
                std::cout << "enter contact index(0~7):";
                std::getline(cin , search_);
                int i;
                i = 0;
                if (cin.eof() || cin.bad() || cin.fail())
                    break;
                std::sscanf(search_.c_str(), "%d", &i);
                if (check_num(search_) == "" || !(i <= 7 && i >= 0))
                    {
                        std::cout << "[-] indexes are from 0 to 7" << std::endl;
                        continue;
                    }
                if (i > contacts_count)
                    std::cout << "not contact at index " << i << std::endl;
                else
                    phonebook.display_infos(i);    
            }
        }
        if (!cmd.compare("ADD"))
        {
            std::string contact_name ,contact_last_name, contact_nickname, contact_darkest_sec;
            phonebook.contacts[index_count].phone_num = check_num(new_entry("phone_number"));
            phonebook.contacts[index_count].contact_name = new_entry("contact_00name");
            phonebook.contacts[index_count].contact_last_name = new_entry("contact_last_name");
            phonebook.contacts[index_count].contact_nickname = new_entry("contact_nickname");
            phonebook.contacts[index_count].contact_darkest_sec = new_entry("contact_darkest_sec");
            if (phonebook.contacts[index_count].phone_num == "" || phonebook.contacts[index_count].contact_name == "" || phonebook.contacts[index_count].contact_last_name == "" || phonebook.contacts[index_count].contact_nickname == "" || phonebook.contacts[index_count].contact_darkest_sec == "")
                {
                    std::cout << "failed to add the new contact\n";
                    continue;
                }
            index_count++;
            contacts_count++;
        }
        if (index_count == 8)
            index_count = 0;
        if (!cmd.compare("EXIT"))
            break;
    }
}