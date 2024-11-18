/*
Scrivere un programma in C che divide (divisione intera) un
numero intero a diviso 2^b.
*/
#include <stdio.h>

int main()
{
    unsigned int a = 134;
    unsigned char b = 3;
    printf("%d diviso 2 elevato a %d = %d ", a, b, a >> b);
    printf("resto: %d", a - ((a >> b) << b));
}