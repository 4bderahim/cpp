#include <fstream>
#include <iostream>



using namespace std;
int main()
{
    string text;
    string op;
    ifstream MyReadFile("19920104_091532.log");
    while (getline(MyReadFile, text))
        {
            // cout << text << "\n";
            break;
        }
    int i = 0;
    while (text[i])
    {
        i++;
    }
    MyReadFile.close();
}