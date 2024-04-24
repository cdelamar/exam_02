#include <unistd.h>

void print_bit (char c)
{
    int bit = 7;

    while(bit >= 0)
    {
        if ((c >> bit) & 1)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        bit--;
    }
    write(1, "\n", 1);
}

unsigned char reverse_bits (unsigned char c)
{
    size_t len = 8;
    unsigned char r = 0;

    while (len)
    {
        r = (r << 1) | (c & 1);
        c >>= 1;
        len --;
    }

    return (r);
}

// test

int main ()
{
    char n = 79;
    print_bit(n);
    char n2 = (rev_bit(n));
    print_bit(n2);
}