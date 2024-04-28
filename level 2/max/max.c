//#include <stdio.h>

int max (int *tab, unsigned int len)
{
    int output = 0;

    while (len > 0)
    {
        if (output < tab[len])
            output = tab[len];
        len--;
    }
    return (output);
}

//test
/*
int main ()
{
    int tab[] = {12, 4, 23, 6, 1, 12, 3, 65, 97};
    int res = max(tab, 9);

    printf("res : %d\n", res);
}*/