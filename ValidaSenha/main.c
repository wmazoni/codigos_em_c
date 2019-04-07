#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha;
        printf("Digite a senha:");
        scanf("%d",&senha);
        if (senha == 2002)
            printf("Acesso Permitido");
        else
            printf("Senha invalida");
    return 0;
}
