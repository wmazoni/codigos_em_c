#include <stdio.h>
int strlen(char *s); /* Prot�tipo da fun��o */

int main()
{
    char s[100];
    char *ptr = s; /* Aponta para o primeiro caractere de s*/

    printf("Introduza uma String: "); gets(s);

    printf("%d\n", strlen(s));
}
int strlen(char *s)
{
    char *ptr = s;      /* Guardar o endere�o inicial */
    while (*s!='\0')    /* Enquanto n�o chegarmos ao fim */
        s++;            /* Incrementar o ponteiro */
    return (int) (s-ptr);   /* Retornar a diferen�a entre os endere�os*/
}
