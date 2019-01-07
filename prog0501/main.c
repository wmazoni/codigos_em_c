#include <stdio.h>

int main(){
    int i;

    /* Escrita cabeçalho */

    for (i=1; i<=20; i++)
        putchar('*');
    putchar('\n');

    puts("Números entre 1 e 5");

    for (i=1; i<=20; i++)
        putchar('*');
    putchar('\n');

    /* Escrita dos Números */

    for (i=1; i<=5; i++)
        printf("%d\n",i);

    for (i=1; i<=20; i++)
        putchar('*');
    putchar('\n');
}