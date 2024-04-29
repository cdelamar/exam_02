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

    while(s[i])
    {
        if((s[i] >= 'a' && s[i] <= 'y') || (s[i] >= 'A' && s[i] <= 'Y'))
            ft_putchar(s[i] + 1);
        else if ((s[i] == 'z') || (s[i] == 'Z'))
            ft_putchar(s[i] - 25);
        else
            ft_putchar(s[i]);
        i++;
    }

    ft_putchar('\n');
    return 0;
}