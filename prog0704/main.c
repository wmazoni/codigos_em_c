#include <stdio.h>

int main()
{
    char Nome[100];
    while (1)   /* Laco infinito */
    {
        puts("Nome:");
        gets(Nome);
        if (Nome[0]=='\0')  /* Se a string estiver vazia */
            break;          /* Terminar o laco */
        else
            printf("Nome Introduzido: %s\n",Nome);
    }
}
