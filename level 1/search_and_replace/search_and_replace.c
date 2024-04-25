#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return i;
}

void search_and_replace(char *s, char *c1, char *c2)
{
	int i = 0;

		while (s[i])
	{
		if(s[i] == *c1)
			ft_putchar(*c2);
		else
			ft_putchar(s[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		ft_putchar('\n');
		return 0;
	}

	char *s = argv[1];
	char *c1 = argv[2];
	char *c2 = argv[3];

	if (ft_strlen(c1) != 1 && ft_strlen(c2) != 1)
	{
		ft_putchar('\n');
		return 0;
	}

	search_and_replace(s, c1, c2);

	ft_putchar('\n');
	return 0;
}