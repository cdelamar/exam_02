#include <unistd.h>
#include <stdio.h>

void ft_putchar (char c)
{
	write (1, &c, 1);
}

int already_printed (char *s1, char s2, int len)
{
	int i = 0;

	while(s1[i] && i < len)
	{
		if (s1[i] == s2)
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

	char *s1 = argv[1];
	char *s2 = argv[2];
	int i = 0;
	int j = 0;
	int len = 0;

	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if(s1[i] == s2[j] && (already_printed(s1, s2[j], len) == 0))
			{
				ft_putchar(s1[i]);
				break;
			}
			else
				j++;

		}
		len++;
		i++;
	}

	ft_putchar('\n');
	return 0;
}