#include <stdio.h>
#include <stdlib.h>

void inicializaTabuleiro(int tabuleiro[][5])
{
    int linha, coluna;
        for(linha=0 ; linha < 5 ; linha++ )
            for(coluna=0 ; coluna < 5 ; coluna++ )
                tabuleiro[linha][coluna]=-1;
}

void mostraTabuleiro(int tabuleiro[][5])
{

    int linha, coluna;

        printf("\t1 \t2 \t3 \t4 \t5");
        printf("\n");

        for(linha=0 ; linha < 5 ; linha++ ){
            printf("%d",linha+1);
            for(coluna=0 ; coluna < 5 ; coluna++ ){
                if(tabuleiro[linha][coluna]==-1){
                    printf("\t~");
                }else if(tabuleiro[linha][coluna]==0){
                    printf("\t*");
                }else if(tabuleiro[linha][coluna]==1){
                    printf("\tX");
                }

            }
            printf("\n");
        }

    }

void iniciaNavios(int navios[][2]){
        srand(time(NULL));
        int navio, anterior;

        for(navio=0 ; navio < 3 ; navio++){
            navios[navio][0]= rand()%5;
            navios[navio][1]= rand()%5;

            //agora vamos checar se esse par não foi sorteado
            //se foi, so sai do do...while enquanto sortear um diferente
            for(anterior=0 ; anterior < navio ; anterior++){
                if( (navios[navio][0] == navios[anterior][0])&&(navios[navio][1] == navios[anterior][1]) )
                    do{
                        navios[navio][0]= rand()%5;
                        navios[navio][1]= rand()%5;
                    }while( (navios[navio][0] == navios[anterior][0])&&(navios[navio][1] == navios[anterior][1]) );
            }

        }
    }

void darTiro(int tiro[2])
{

        printf("Linha: ");
        scanf("%d",&tiro[0]);
        tiro[0]--;

        printf("Coluna: ");
        scanf("%d",&tiro[1]);
        tiro[1]--;

}

int acertou(int tiro[2], int navios[][2])
{
    int navio;

        for(navio=0 ; navio < 3 ; navio++){
            if( tiro[0]==navios[navio][0] && tiro[1]==navios[navio][1]){
                printf("Você acertou o tiro (%d,%d)\n",tiro[0]+1,tiro[1]+1);
                return 1;
            }
        }
        return 0;
    }

void dica(int tiro[2], int navios[][2], int tentativa)
{
        int linha=0,
            coluna=0,
            fila;

        //conta quantos navios há na linha tiro[0]
        for(fila=0 ; fila < 3 ; fila++){
            if(navios[fila][0]==tiro[0])
                linha++;
            if(navios[fila][1]==tiro[1])
                coluna++;
        }

        printf("\nDica %d: \nlinha %d -> %d navios\ncoluna %d -> %d navios\n",tentativa,tiro[0]+1,linha,tiro[1]+1,coluna);
}

void alteraTabuleiro(int tiro[2], int navios[][2], int tabuleiro[][5]){
        if(acertou(tiro,navios))
            tabuleiro[tiro[0]][tiro[1]]=1;
        else
            tabuleiro[tiro[0]][tiro[1]]=0;
    }

int main() {
        int tabuleiro[5][5];
        int navios[3][2];
        int tiro[2];
        int tentativas=0,
            acertos=0;

        inicializaTabuleiro(tabuleiro);
        iniciaNavios(navios);

        printf("\n");

        do{
            mostraTabuleiro(tabuleiro);
            darTiro(tiro);
            tentativas++;

            if(acertou(tiro,navios)){
                dica(tiro,navios,tentativas);
                acertos++;
            }
            else
                dica(tiro,navios,tentativas);

            alteraTabuleiro(tiro,navios,tabuleiro);


        }while(acertos!=3);

        printf("\n\n\nJogo terminado. Você acertou os 3 navios em %d tentativas", tentativas);
        mostraTabuleiro(tabuleiro);
    }
