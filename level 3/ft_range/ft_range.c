#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int *ft_range(int start, int end)
{
    int *output;
    int i = 0;
    int len = 0;
    int count;

    if (start == 0 && end == 0)
    {
        output = malloc(sizeof(int) * 1);
        output[0] = 0;
        return (output);
    }

    else if (start < end)
    {
        count = start;
        while (count <= end)
        {
            count++;
            len++;
        }
        output = malloc(sizeof(int) * len);

        while(i < len)
        {
            output[i] = start;
            i++;
            start++;
        }
    }

    else if (start > end)
    {
        count = end;
        while (count <= start)
        {
            count++;
            len++;
        }
        output = malloc(sizeof(int) * len);

        while(i < len)
        {
            output[i] = start;
            i++;
            start--;
        }
    }
    return (output);
}
