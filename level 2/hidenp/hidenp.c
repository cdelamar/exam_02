#include <unistd.h>
#include <stdio.h>

void ft_putchar (char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    if(argc != 3)
    {
        ft_putchar('\n');
        return 0;
    }

    char *s1 = argv[1];
    char *s2 = argv[2];
    int i = 0;
    int j = 0;

    while (s2[j])
    {
        if(s2[j] == s1[i])
            i++;
        j++;
    }

    if(!s1[i])
    {
        ft_putchar('1');
        ft_putchar('\n');
        return (0);
    }

    else
    {
        ft_putchar('0');
        ft_putchar('\n');
        return 0;
    }
}
