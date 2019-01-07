#include <stdio.h>

void linha(); /* Declaração da Função linha*/

int main(){
    linha();
    printf("Hello World\n");
    linha();
}

void linha(){
    int i;
    for (i=1; i<=20; i++)
        putchar('*');
    putchar('\n');
}
