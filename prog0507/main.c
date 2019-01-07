#include <stdio.h>

/* Devolva a soma de dois inteiros */
int soma(int a, int b){
        return a+b;
    }

/* Devolve o dobro de qualquer inteiro */
int dobro(int x){
    return 2*x;
}

int main(){
    int n, i, total;
    printf("Introduza dois números");
    scanf("%d%d",&n,&i);
    total = soma(n,i); /* Atrib. do resultado de função a uma var */
    printf("%d+%d=%d\n", n, i, total);
    printf("2*%d=%d e 2*%d=%d\n",n,dobro(n),i,dobro(i));
}