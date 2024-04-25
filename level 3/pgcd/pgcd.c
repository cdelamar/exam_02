#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int pgcd(int n1, int n2)
{
    int i = 1;
    int res = 0;
    int max = 0;

    if (n1 < n2)
        max = n1;
    else
        max = n2;

    while(i <= max)
    {
        if ((n1 % i == 0) && (n2 % i == 0 ))
            res = i;
        i++;
    }
    return res;
}

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("\n");
        return 0;
    }

    int n1 = atoi(argv[1]);
    int n2 = atoi(argv[2]);
    int res = pgcd(n1, n2);

    printf("%d\n", res);
    return 0;
}