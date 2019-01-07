#include <stdio.h>

int main() {
    int i,conta;
    char ch;
    for (i=0,conta=1 ; i<=255 ; i++){
        printf("%3d --> %c\n",i, (char) i);
        if (conta == 20){
            do{
                printf("Pressione c ou C para continuar ...");
                scanf(" %c", &ch);
            }
            while (ch != 'c' && ch != 'C');
            conta=1;
        }
        else
            conta++;
    }

}