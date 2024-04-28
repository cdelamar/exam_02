#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_putchar (char c)
{
    write(1, &c, 1);
}

int is_space (char c)
{
    return (c <= 32);
}

char *first_word (char *s)
{
    if (s == NULL)
        return (NULL);

    int i = 0;
    int j = 0;
    int len = 0;
    char *output;


    while (is_space(s[i]) == 1 && s[i])
        i++;

    j = i;
    while (is_space(s[i]) == 0 && s[i])
    {
        len++;
        i++;
    }

    output = malloc(sizeof(char) * len + 1);
    output[len] = '\0';
    i = 0;

    while (len)
    {
        output[i] = s[j];
        ft_putchar(output[i]);
        len--;
        i++;
        j++;
    }
    return(output);
}

char *rostring (char *s)
{
    int i = 0;
    int j = 0;

    while (is_space(s[i]) == 1 && s[i])
        i++;
    while (is_space(s[i]) == 0 && s[i])
        i++;
    while (is_space(s[i]) == 1 && s[i])
        i++;
    if ((is_space(s[i]) == 0 && s[i]))
    {
        while (s[i])
        {
            while ((is_space(s[i]) == 0 && s[i]))
            {
                ft_putchar(s[i]);
                i++;
            }

            while ((is_space(s[i]) == 1 && s[i]))
                i++;
            ft_putchar(' ');
        }
    }
}

int count_word (char *s)
{
    int i = 0;
    int words = 0;

    if(s == NULL)
        return 0;

    while (s[i])
    {
        while (is_space(s[i]) == 1 && s[i])
            i++;
        if (is_space(s[i]) == 0 && s[i])
            words++;
        while (is_space(s[i]) == 0 && s[i])
            i++;
    }

    return words;
}

int main (int argc, char **argv)
{
    if (argc < 2)
    {
        ft_putchar('\n');
        return 0;
    }

    char *s = argv[1];
    char *word;
    char *output;

    if(count_word(s) == 1)
        word = first_word(s);
    else
    {
        output = rostring(s);
        word = first_word(s);
    }

    ft_putchar('\n');
    return 0;
}