#include <unistd.h>

void ft_putchar (char c)
{
    write (1, &c, 1);
}

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putchar('\n');
        return 0;
    }

    char *s = argv[1];
    int i = 0;
    int repeat = 0;

    while(s[i])
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            repeat = s[i] - ('a' - 1);
            while (repeat > 0)
            {
                ft_putchar(s[i]);
                repeat--;
            }
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            repeat = s[i] - ('A' - 1);
            while (repeat > 0)
            {
                ft_putchar(s[i]);
                repeat--;
            }
        }
        else
            ft_putchar(s[i]);
        i++;
    }

    ft_putchar('\n');
    return 0;
}