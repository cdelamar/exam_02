#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int do_op (int n1, char op, int n2)
{
    if (op == '+')
        return(n1 + n2);
    else if (op == '-')
        return(n1 - n2);
    else if (op == '/')
        return(n1 / n2);
    else if (op == '*')
        return(n1 * n2);
    else
        return (0);
}


int main(int argc, char **argv)
{
    if(argc != 4)
    {
        printf("\n");
        return 0;
    }

    int n1 = atoi(argv[1]);
    char op = argv[2][0];
    int n2 = atoi(argv[3]);

    int res = do_op(n1, op, n2);
    printf("%d\n", res);
}