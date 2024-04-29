#include <string.h>
#include <stdio.h>
#include <unistd.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j = 0;
    int output = 0;

    while(reject[j])
    {
        output = 0;
        i = 0;
        while(s[i])
        {
            if (s[i] == reject[j])
                return (output);
            output++;
            i++;
        }
        j++;
    }

    return (output);
}

//test
/*
int main()
{
    char *s1 = "sp07";
    char *s2 = "123p9";
    size_t res = strcspn(s1, s2);
    size_t res2 = strcspn(s1, s2);
    printf("%ld\n", res);
    printf("%ld\n", res2);
    return 0;
}*/