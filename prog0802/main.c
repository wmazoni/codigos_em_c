#include <stdio.h>

int main()
{
    char s[100];
    char *ptr = s; /* Aponta para o primeiro caractere de s */

    printf("Introduza uma String: "); gets(s);

    if (*ptr == '\0') return; /* ou return 0 se der erro de compil.*/
    /* String Vazia */

    /* Imprimir a string Normalmente */
    while (*ptr!='\0')
        putchar(*ptr++);

    /* Imprimir a string ao contr�rio */

    ptr--; /* Por causa do '\0' */ 21;
    while (ptr>=s)    /* Enquanto ptr for >= que &s[0] */
        putchar(*ptr--);
}
