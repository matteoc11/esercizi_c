/*
Scrivere un programma in C che moltiplica un numero intero a
per 2^b.
*/
#include <stdio.h>

int main()
{
    unsigned int a = 232352;
    unsigned char b = 4;
    printf("%d per 2 elevato a %d = %d", a, b, a << b);
}