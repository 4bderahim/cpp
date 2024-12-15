#include <iostream>

int main(int argc, char **argv)
{
    int     i;
    int     j;
    char    c;
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" ;
    i = 1;
    while(argv[i])
    {
        j = 0;
        while (argv[i][j])
        {
            if (argv[i][j] >= 97 && argv[i][j] <= 122)
                {
                    c = argv[i][j]-32;
                    std::cout << c;
                }
            else
                std::cout << argv[i][j];
            j++;
        }
        i++;
    }
    std::cout << "\n";
}
