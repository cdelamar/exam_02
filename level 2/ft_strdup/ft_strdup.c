#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
    char *dest = NULL;
    int len = 0;
    int i = 0;

    while (src[len])
        len++;

    dest = (char *)malloc(sizeof(char) * len + 1);
    if (dest == NULL)
        return (NULL);

    dest[len] = '\0';

    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }

    return (dest);
}

// Test

/*
int main()
{
    char *src = "test";
    char *dest = strdup(src);
    char *dest2 = ft_strdup(src);

    printf("dest = %s\n", dest);
    printf("dest2 = %s\n", dest2);
}*/