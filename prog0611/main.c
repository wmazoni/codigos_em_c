#include <stdio.h>

#define DIM 3
#define ESPACO ' '

void inic(char s[][DIM]);
void mostra(char s[DIM][DIM]);
int Ganhou(char g[DIM][DIM],char ch);
int Linha(char v[],char c);
int Coluna(char g[DIM][DIM], int col,char ch);


/* Inicia o Tabuleiro */
void inic(char s[][DIM])
{
    int i,j;
    for(i=0;i<DIM;i++)
        for(j=0;j<DIM;j++)
            s[i][j]=ESPACO;
}
/* Mostra o aspecto do tabuleiro */
void mostra(char s[DIM][DIM]) {
    int i, j;
    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++)
            printf("%c %c", s[i][j], j == DIM - 1 ? ' ' : '|');
        if (i != DIM - 1) printf("\n--------");
        putchar('\n');
    }
}
/* Verifica se a n-ésima linha está preenchida com o char c */
int Linha(char v[],char c) {
    return v[0] == v[1] && v[1] == v[2] && v[0] == c;
}
/* Verifica se a coluna col está toda preenchida com o char ch */
int Coluna(char g[DIM][DIM], int col,char ch)
{
    return g[0][col]==g[1][col] && g[1][col]==g[2][col] && g[0][col]==ch;
}
/* Verifica se alguma das diagonais está preenchida totalmente */
/* com o char ch */
int Diagonal(char g[DIM][DIM],char ch) {
    return (g[0][0] == g[1][1] && g[2][2] == g[1][1] & g[0][0] == ch) ||
           (g[0][2] == g[1][1] && g[2][0] == g[1][1] & g[0][2] == ch);
}
/* Verifica se o jogador do caractere ch ganhou o jogo */
int Ganhou(char g[DIM][DIM],char ch)
{
    if (Linha(g[0],ch) || Linha(g[1],ch) || Linha(g[2],ch))
        return 1;
    if (Coluna(g,0,ch) || Coluna(g,1,ch) || Coluna(g,2,ch))
        return 1;
    if (Diagonal(g,ch))
        return 1;
    return 0; /* Não ganhou o Jogo */
}

int main()
{
    char Velha[DIM][DIM];
    int posx, posy;
    char ch = '0'; /* Caractere a Jogar */
    int n_jogadas = 0;

    inic(Velha);
    while (1) /* Laço Infinito */
    {
        mostra(Velha);
        printf("\nIntroduza a Posição de Jogo Linha Coluna: ");
        scanf("%d %d",&posx,&posy);
        if (posx> DIM || posy>DIM)
        {
            printf("\n\n**** Valores Inválidos ****\n\n");
            continue; /* Proxima iteração */
        }
        posx--;posy--; /* Os índices do vetor começam em ZERO */
        if (Velha[posx][posy]==ESPACO) /* Casa Livre */
        {
            Velha[posx][posy] = ch = (ch == '0') ? 'X' : '0';
            n_jogadas++;
            if (Ganhou(Velha,ch)) /* Basta verificar o jogador corrente */
            {
                printf("\n\n**** Ganhou o Jogador %c ****\n\n",ch);
                break;
            }
        }
        else
            printf("Posiçao já ocupada\nJogue Novamente!!!\n");
        if (n_jogadas==DIM*DIM)
        {
            printf("\n\n**** EMPATE TÉCNICO ***\n\n");
            break; /* Acabar o Laço */
        }
        mostra(Velha);
    }





























{















{







}











{











{







}



}















{







}



}







}