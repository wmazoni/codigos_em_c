#include <stdio.h>
#include <string.h>
#define DIM 20
#define SEP_NOME ","

int main()
{
    char Nome[DIM+1], Sobrenome[DIM+1],Completo[2*DIM+1];
    while (1)
    {
        printf("Nome: "); fgets(Nome, DIM+1, stdin);
        if(strlen(Nome)==0)
            break; /* Terminar o programa */
        /* Colocar o Sobrenome, Nome na string Completo */
        printf("Sobrenome: "); fgets(Sobrenome, DIM+1, stdin);
        strcpy(Completo,Sobrenome); /* Copiar sobrenome */
        strcat(Completo,SEP_NOME); /* Juntar separador */
        strcat(Completo,Nome); /* Juntar o prim. Nome */
        puts(Completo);
    }
}
