#include <stdio.h>

int main() {
    int num;
    printf("Introduza um Inteiro: ");
    scanf("%d",&num);
    printf("Foi introduzido %d cujo caractere = '%c'\n",num,(char) num);
    printf("O caractere seguinte = '%c' tem o ASCII nº %d\n",(char) (num+1) , num+1);
}