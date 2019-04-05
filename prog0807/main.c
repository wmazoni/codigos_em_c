#include <stdio.h>
#define N_STRINGS 3

int main()
{
    char vetor[N_STRINGS][20] = {"Olá", "Antônio","Susana"};
    char (*ptr)[20] = vetor; /* Ponteiro para vetores de 20 chars */
    char *p;

    while(ptr-vetor<N_STRINGS)
    {
        p = *ptr; /* recebe a string apontada apontada por ptr */
        while (*p)
            putchar(*p++);
            putchar ('\0');
            ptr++;
    }
}
