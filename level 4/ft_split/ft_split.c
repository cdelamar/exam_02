#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy (char *dest, char *src, int len)
{
	int i = 0;
	int last = len;

	while (src[i] && len > 0)
	{
		dest[i] = src[i];
		i++;
		len--;
	}

	dest[last] = '\0';
	return (dest);
}

int is_space (char c)
{
	return ((c <= 32 || c == ' '));
}

int count_words (char *str)
{
	int i = 0;
	int words = 0;

	while (str[i])
	{
		while(is_space(str[i]) == 1 && str[i])
			i++;
		if(is_space(str[i]) == 0 && str[i])
			words++;
		while(is_space(str[i]) == 0 && str[i])
			i++;
	}
	return (words);
}

char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int size = 0;
	int words = count_words(str);
	int split = 0;
	char **output;

	output = (char **)malloc(sizeof(char *) * words + 1);
	if (output == NULL)
		return (NULL);
	output[words] = NULL;

	while(is_space(str[i]) == 1 && str[i])
		i++;

	while(str[i])
	{
		while(is_space(str[i]) == 1 && str[i])
			i++;
		if ((is_space(str[i]) == 0 && str[i]))
		{
			size = 0;
			j = i;
			while ((is_space(str[j]) == 0 && str[j]))
			{
				j++;
				size++;
			}
			output[split] = (char *)malloc(sizeof(char) * size + 1);
			ft_strncpy(output[split], &str[i], size);
			split++;
		}
		while((is_space(str[i]) == 0 && str[i]))
			i++;
	}

	return (output);
}
/*
int main ()
{
	char *tab = "	 le    tes t est-il reussi 		";
	char **res = ft_split(tab);

	int i = 0;

	while (res[i])
	{
		printf("res[%d] = %s\n", i, res[i]);
		i++;
	}
	if (res[i] == NULL)
		printf("null");
}*/