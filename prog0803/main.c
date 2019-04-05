#include <stdio.h>
int strlen(char *s); /* Protótipo da função */

int main()
{
    char s[100];
    char *ptr = s; /* Aponta para o primeiro caractere de s*/

    printf("Introduza uma String: "); gets(s);

    printf("%d\n", strlen(s));
}
int strlen(char *s)
{
    char *ptr = s;      /* Guardar o endereço inicial */
    while (*s!='\0')    /* Enquanto não chegarmos ao fim */
        s++;            /* Incrementar o ponteiro */
    return (int) (s-ptr);   /* Retornar a diferença entre os endereços*/
}
