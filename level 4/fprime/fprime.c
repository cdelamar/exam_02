#include <stdio.h>
#include <stdlib.h>


int is_prime (int nb)
{
    if (nb == 0 || nb == 1)
        return 0;

    int i = 2;

    while (i <= nb / 2)
    {
        if (nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}


int main(int argc, char **argv)
{
    if(argc != 2)
    {
        printf("\n");
        return 0;
    }

    int nb = atoi(argv[1]);
    if(nb == 1)
    {
        printf("1\n");
        return 0;
    }

    int prime_num = 2;
    int first_output = 1;

    while (prime_num <= nb)
    {
        if (nb % prime_num == 0)
        {
            if(first_output)
                printf("%d",prime_num);
            else
                printf("*%d",prime_num);
            first_output = 0;
            nb /= prime_num;
        }
        else
            prime_num++;
    }

    printf("\n");
    return 0;
}