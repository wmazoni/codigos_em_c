#include <stdio.h>

void troca(int *a, int *b); /* Prototipo da função */

int main(){
    int n, k;
    puts("Introduza dois números inteiros");
    scanf("%d %d", &n, &k);
    printf("Antes da troca n=%d e k=%d\n", n,k);
    troca(&n,&k); /* Troca n com k */
    printf("Depois da troca n=%d e k=%d\n",n,k);
}

void troca(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}