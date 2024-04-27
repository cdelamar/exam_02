#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return 0;
	}


	char *s = argv[1];
	int len = 0;

	while (s[len])
		len++;


	len--;
	while(len >= 0)
	{
		ft_putchar(s[len]);
		len--;
	}

	ft_putchar('\n');
	return 0;
}