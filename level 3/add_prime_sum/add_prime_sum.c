#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void ft_putchar (char c)
{
    write(1, &c, 1);
}

void ft_putnbr (int n)
{
    if (n <= 9)
    {
        ft_putchar (n + '0');
        return;
    }

    else if (n >= 10)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
}


int ft_atoi (char *s)
{
    int i = 0;
    int num = 0;

    while (s[i])
    {
        num = num * 10 + (s[i] - '0');
        i++;
    }

    return (num);
}

int is_prime (int n)
{
    if (n == 0 || n == 1)
        return (0);

    int i = 2;

    while (i <= n / 2)
    {
        if (n % i == 0)
            return (0);
        i++;
    }

    return (1);
}

int add_prime_sum (int n)
{
    int sum = 0;
    int i = 0;

    while (i <= n)
    {
        if (is_prime(i))
            sum += i;
        i++;
    }

    return sum;
}

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putchar('0');
        ft_putchar('\n');
        return 0;
    }

    int n = ft_atoi(argv[1]);

    ft_putnbr(add_prime_sum(n));

    ft_putchar('\n');
    return 0;
}

