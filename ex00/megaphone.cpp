
#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
    char *str;
    int len;
    int i;
    int j;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (j = 1; j < argc; j++)
        {
            str = argv[j];
            len = strlen(str);
            for(i = 0; i < len; i++)
            {
                if (str[i] >= 97 && str[i] <= 122)
                    str[i] = str[i] - 32;
            }
            std::cout << str;
        }
        std::cout << std::endl;
    }
    return (0);
}