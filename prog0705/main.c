#include <stdio.h>
#include <string.h>
#define DIM 20
#define SEP_NOME ","

int strcountc(char *s, char ch)
{
int i,conta;
for (i=conta=0 ; s[i]!='\0' ; i++)
if (s[i]==ch)     /* Se for o caractere que procuramos */
conta++;          /* Incrementar o contador */
return conta;
}
int main()
{
    char Nome[DIM+1], Sobrenome[DIM+1],Completo[2*DIM+1];
    while (1)
    {
        printf("Nome: "); gets(Nome);
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
