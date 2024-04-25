#include <unistd.h>
#include <stdio.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

int hidenp (char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while(s1[i])
	{
		while(s2[j])
		{
			if(s1[i] == s2[j])
				break;
			j++;
			if (!s2[j])
				return 0;
		}
		i++;
	}
	return 1;
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (hidenp(argv[1], argv[2]))
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	ft_putchar('\n');
	return 0;
}