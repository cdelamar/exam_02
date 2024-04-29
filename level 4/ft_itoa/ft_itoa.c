#include <stdlib.h>
#include <stdio.h>

int nbr_len (int nbr)
{
	int len = 0;

		if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	while(nbr)
	{
		len++;
		nbr /= 10;
	}

	return len;
}

char * ft_itoa (int nbr)
{
	int i = 0;
	int len = nbr_len(nbr);
	char *output;

	if (nbr == 0)
	{
		output = malloc(sizeof(char) * 2);
		output[0] = '0';
		output[1] = '\0';
		return (output);
	}

	output = malloc(sizeof(char) * len + 1);
	output[len] = '\0';

	if (nbr < 0)
	{
		output[0] = '-';
		nbr = -nbr;
	}

	len--;
	while(nbr >= 10)
	{
		output[len] = '0' + (nbr % 10);
		nbr /= 10;
		len--;
	}

	if(nbr <= 9)
		output[len] = '0' + nbr;

	return (output);
}
/*
int main()
{
	int nb = 4519;
	char *s = ft_itoa(nb);
	printf("s : %s\n", s);
}*/