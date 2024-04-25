#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}

void ft_putnbr (int nb)
{
	if (nb <= 9)
	{
		ft_putchar(nb + '0');
		return;
	}

	if(nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int main (int argc, char **argv)
{
	if (argc <= 1)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return 0;
	}

	int len = 0;

	while(argv[len])
		len++;

	ft_putnbr(len - 1);
	ft_putchar('\n');

	return 0;
}