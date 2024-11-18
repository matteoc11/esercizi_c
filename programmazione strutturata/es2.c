/*
Scrivere un programma in C che visualizza 1 se il numero è
pari, 0 se è dispari. NOTA: NON VA USATA L’ISTRUZIONE DI
SCELTA.
*/
#include <stdio.h>
int main()
{
    unsigned int a = 12344;
    printf("%d e' pari: %d", a, !(a%2));

}