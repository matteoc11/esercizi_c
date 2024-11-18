/*
Scrivere un programma in C che visualizza 1 se il numero è
pari, 0 se è dispari. NOTA: NON VA USATA L’ISTRUZIONE DI
SCELTA.
*/
#include <stdio.h>

void main()
{
    unsigned int a = 27;
    printf("Pari: %d\n", !(a & 1));
}