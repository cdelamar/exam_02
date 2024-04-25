#include <stdio.h>

int is_power_of_2 (unsigned int n)
{
    if (n == 0)
        return (0);

    while (n >= 2)
    {
        if (n % 2 != 0)
            return 0;

        n /= 2;
    }

    return 1;
}

/*
int main ()
{
    unsigned int n = 1;

    while (n <= 128)
    {
        printf("%d > %d\n", n, is_power_of_2(n));
        n++;
    }
}*/