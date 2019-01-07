#include <stdio.h>

int main() {
    int ano;
    printf("Introd. um Anoº: ");scanf("%d",&ano);
    if ((ano%4 == 0 && ano%100 != 0) || ano%400 == 0)
        printf("Ano é Bissexto\n");
    else
        printf("Ano não é Bissexto\n");
}