/*
Scrivere un programma in C che effettua la divisione intera di un numero intero a per 2^b.
*/
#include <stdio.h>

void main()
{
    unsigned int a = 4294967295;
    unsigned char b = 31;
    printf("%u diviso 2^%d vale %u con resto %u\n", a, b, a >> b, a - ((a >> b) << b));
}