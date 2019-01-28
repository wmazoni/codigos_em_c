#include <stdio.h>
float max(float v[ ],int n); /* Declaração da Função */
float max(float v[ ],int n)
{
    int i;
    float maior = v[0];
    for (i = 1; i < n; i++)
        if (v[i] > maior)
            maior = v[i];
                return maior;
}

int main() /* Programa de teste */
{
    float x[] = {10.0,20.0,15.0,50.0,27.0};

    printf("O maior dos 3 primeiros elementos = %f\n",max(x,3));
    printf("O maior dos 5 primeiros elementos = %f\n",max(x,5));
}