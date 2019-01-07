#include <stdio.h>

int main() {
    int i,j,n;

    printf("Qual o Nº de Ramos: "); scanf("%d", &n);
    for (i=1 ; i<=n ; i++){
        for (j=1 ; j<=i ; j++)
            putchar('A'+i-1);
        putchar('\n');
    }
}