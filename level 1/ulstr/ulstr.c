#include <unistd.h>

void ft_putchar (char c)
{
    write(1, &c, 1);
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

    while (s[i])
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            ft_putchar(s[i] - ('a' - 'A'));
        else if (s[i] >= 'A' && s[i] <= 'Z')
            ft_putchar(s[i] + ('a' - 'A'));
        else
            ft_putchar(s[i]);
        i++;
    }

    ft_putchar('\n');
    return 0;
}