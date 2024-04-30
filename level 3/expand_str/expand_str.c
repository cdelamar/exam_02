#include <unistd.h>
#include <stdio.h>

void ft_putchar (char c)
{
    write(1, &c, 1);
}

int is_space (char c)
{
    return(c <= 32);
}

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putchar('\n');
        return 0;
    }

    int i = 0;
    char *s = argv[1];

    while(is_space(s[i]) && s[i])
        i++;

    while (s[i])
    {
        while (!is_space(s[i]) && s[i])
        {
            ft_putchar(s[i]);
            i++;
        }
        while(is_space(s[i]) && s[i])
        {
            i++;
            if (!is_space(s[i]) && s[i])
                write(1, "   ", 3);
        }
    }

    ft_putchar('\n');
    return 0;
}