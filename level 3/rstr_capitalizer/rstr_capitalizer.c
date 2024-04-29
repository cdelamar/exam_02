#include <unistd.h>
#include <stdio.h>

void ft_putchar (char c)
{
    write(1, &c, 1);
}

char to_lower (char c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + ('a' - 'A'));
    else
        return(c);
}

int is_space (char c)
{
    return (c <= 32);
}

char to_upper (char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - ('a' - 'A'));
    else
        return(c);
}

int is_letter(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int main (int argc, char **argv)
{
    if (argc <= 1)
    {
        ft_putchar('\n');
        return 0;
    }
    int n = 1;
    char **s = argv;
    int i = 0;
    int j = 1;

    while(s[n])
    {
        i = 0;
        while(s[n][i])
        {
            while(is_letter(s[n][i]) == 1 && s[n][i])
            {
                if((is_space(s[n][i + 1]) == 1 && s[n][i]))
                {
                    ft_putchar(to_upper(s[n][i]));
                    i++;
                    break;
                }
                ft_putchar(to_lower(s[n][i]));
                i++;
            }

            while((is_letter(s[n][i]) == 0 && s[n][i]))
            {
                ft_putchar(s[n][i]);
                i++;
            }
        }
        ft_putchar('\n');
        n++;
    }
    return 0;
}