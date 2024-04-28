#include <stdio.h>

int lcm (unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0)
        return 0;

    int i = 1;

    while (1)
    {
        if ((i % a == 0) && (i % b == 0))
            return i;
        i++;
    }
}

//test
/*
int main ()
{
    int res = lcm(12, 16);
    printf("res : %d\n", res);
}*/