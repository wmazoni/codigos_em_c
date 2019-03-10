#include <stdio.h>
#include <string.h>
#define OP_SAIR "SAIR"
int strcountc(char *s, char ch)
{
int i,conta;
for (i=conta=0 ; s[i]!='\0' ; i++)
if (s[i]==ch)     /* Se for o caractere que procuramos */
conta++;          /* Incrementar o contador */
return conta;
}

char *wordupr(char *s)
{
int i;
s[0] = toupper(s[0]); /* O primeiro fica sempre em maiúsculas */
for (i=1 ; s[i-1]!='\0' ; i++)
if (s[i-1]==' ') /* Se o caractere anterior for um espaço */
s[i] = toupper(s[i]);
else
s[i] = tolower(s[i]);
return s;
}
/*
* Coloca no Parâmetro Sobrenome a última palavra da string Nome.
* Em seguida retira essa palavra da string Nome colocando um '\0'
*
*/

void Separa(char *Nome, char *Sobrenome)
{
    int i,j;
    if (strcountc(Nome,' ')==0) /* Existe apenas uma ou zero palavras no nome */
    {
        Sobrenome[0]='\0';
        return;
    }
    /* Existe a garantia que há um sobrenome */

    for (i=strlen(Nome)-1,j=0 ; Nome[i]!=' ' ; )
        Sobrenome[j++] = Nome[i--];
    Sobrenome[j]='\0'; /* Terminar a string Sobrenome */
    Nome[i]='\0'; /* Retirar o sobrenome da String Nome */

    /* Como a string Sobrenome foi colocada do fim para o princípio é necessário invertê-la*/

    strrev(Sobrenome);
}

main()
{
    char Nome[100],Sobrenome[20];

    for (; ;) /* Equivalente a while (1) */
    {
        printf("Nome: ");
        gets(Nome);
        if (stricmp(Nome,OP_SAIR)==0) break; /* Sair do Programa */
        Separa(Nome,Sobrenome);
        printf("%s, %s\n",wordupr(Sobrenome),wordupr(Nome));
    }
}
