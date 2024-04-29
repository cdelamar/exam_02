#include <unistd.h>

int is_space (char c)
{
	return (c <= 32);
}

void ft_putchar (char c)
{
	write (1, &c, 1);
}

int main(int argc, char **argv)
{
	int start;
	int end;
	int i = 0;
	int  flag;

	if(argc == 2)
	{

		while(argv[1][i] != '\0')
			i++;
		while(i >= 0)
		{
			while(argv[1][i] == '\0' || is_space(argv[1][i]))
				i--;
			end = i;
			while(argv[1][i] && (!is_space(argv[1][i])))
				i--;

			start = i + 1;
			flag = start;

			while(start <= end)
			{
				ft_putchar(argv[1][start]);
				start++;
			}
			if (flag != 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}