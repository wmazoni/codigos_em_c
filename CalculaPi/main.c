#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio;
    double Pi = 3.14159, area;

    printf("Introduza o Raio da Circunfer�ncia: ");
    scanf("%f", &raio);
    area = Pi * raio * raio;
    printf("�rea = %.4f", area);
    return 0;
}
