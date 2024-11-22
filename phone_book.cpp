#include <iostream>
#include <vector>



class Phonebook
{
    public:
    std::vector<std::string> alo;
    public:
    void add_contact(std::string contact)
    {
        alo.push_back(contact);
    }
    public:
    void search_(int index)
    {
        while (1)
        {
            int i;
            std::cout << "enter contact id:";
            std::cin >> i;
            
        }
        

    }


};
int main()
{
    std::vector<std::string> alo;
    std::string j;
    while (1)
    {
        std::cout << "|||>>>";
        std::cin >> j;
        alo.push_back(j);
        std::cout << "\n" << j << "\t" << alo[1] ;
    }
}