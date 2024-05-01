#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}

int already_typed (char *s1, int len, char c)
{
	int i = 0;

	while (i < len)
	{
		if (s1[i] == c)
			return 1;
		i++;
	}
	return 0;
}

int main (int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return 0;
	}

	int i = 0;
	int j = 0;

	char *s1 = argv[1];
	char *s2 = argv[2];

	while (s1[i])
	{
		if (!already_typed(s1, i, s1[i]))
			ft_putchar(s1[i]);
		i++;
	}

	while (s2[j])
	{
		if (!already_typed(s1, i, s2[j]) && !already_typed(s2, j, s2[j]))
			ft_putchar(s2[j]);
		j++;
	}

	ft_putchar('\n');
	return 0;
}
