#include <iostream>
#include <cstdlib>

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    int i = 1;
    while (av[i] != NULL)
    {
        
        char *str = av[i];
        if (i != 1)
            std::cout << " ";       
        while (*str)
        {
            std::cout << static_cast<char>(std::toupper(*str));
            str++;
        }
        i++;
    }
    std::cout << std::endl;
    return 0;
}
 