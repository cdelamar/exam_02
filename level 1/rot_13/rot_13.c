#include <unistd.h>

void ft_putchar (char c)
{
    write(1, &c, 1);
}

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        write (1, "\n", 1);
        return 0;
    }

    char *s = argv[1];
    int i = 0;

    while (s[i])
    {
        if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
            ft_putchar(s[i] + 13);
        else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
            ft_putchar(s[i] - 13);
        else
            ft_putchar(s[i]);
        i++;
    }

    write (1, "\n", 1);
    return 0;
}