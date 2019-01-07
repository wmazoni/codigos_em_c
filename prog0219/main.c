#include <stdio.h>

int main() {
    float x;
    printf("Introduza um Nº real: ");
    scanf("%f",&x);
    printf("Parte Inteira:          %d\n",(int) x);
    printf("Parte Fracionaria:      %f\n", x - ((int) x));
}