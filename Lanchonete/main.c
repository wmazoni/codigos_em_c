#include <stdio.h>
#include <stdlib.h>

int main()
{
    float qtd;
    int codigo;

        printf("1 - Cachorro quente - R$4.00\n");
        printf("2 - X-Salada - R$4.50\n");
        printf("3 - X-Bacon - R$5.00\n");
        printf("4 - Torrada simples - R$2.00\n");
        printf("5 - Refrigerante - R$1.50\n");
        scanf(" %d", &codigo);
        fflush(stdin); /* Limpar o Buffer do teclado */
        switch (codigo)
        {
        case 1:
            printf("Digite a quantidade do cachorro quente: ");
            scanf("%f",&qtd);
            printf("Total: %.2f",qtd*4.00);
            break;
        case 2:
            printf("Digite a quantidade do X-Salada: ");
            scanf("%f",&qtd);
            printf("Total: %.2f",qtd*4.50);
            break;
        case 3:
            printf("Digite a quantidade do X-Bacon: ");
            scanf("%f",&qtd);
            printf("Total: %.2f",qtd*5.00);
            break;
        case 4:
            printf("Digite a quantidade de torrada simples: ");
            scanf("%f",&qtd);
            printf("Total: %.2f",qtd*2.00);
            break;
        case 5:
            printf("Digite a quantidade de refrigerante: ");
            scanf("%f",&qtd);
            printf("Total: %.2f",qtd*1.50);
            break;
        default :
            printf("Valor inválido");
        }
    return 0;
}
