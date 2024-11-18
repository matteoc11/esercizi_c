#include <stdio.h>

void main()
{
    unsigned short int a = 65535;
    unsigned char b = 16;
    printf("%d per 2^%d vale %u\n", a, b, a << b);
}