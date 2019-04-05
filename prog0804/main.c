#include <stdio.h>

int strlen(char *s)
{
    char *prt = s;  /*Guardar o endereço inicial */
    while (*s!='\0')/*Enquanto não chegamos ao fim*/
        s++;        /*Incrementar ponteiro*/
    return (int) (s-ptr);
}

int main()
{
    char Nome[100];
    printf("Introduza uma string: "); gets(Nome);

    printf("%d\n",strlen(Nome));
}
