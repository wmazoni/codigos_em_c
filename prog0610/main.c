#include <stdio.h>
#define MAX 3 /* Para teste vamos usar o 3 */

void transpor(int v[MAX][MAX])
    int i,j,tmp;

    for (i=0;i<MAX;i++)
        for (j=i+1;j<MAX;j++){
            tmp = v[i][j];
            v[i][j] = v[j][i];
            v[j][i] = tmp;
        }
}

void imprime(int v[][MAX]){
    int i, j;
    for (i=0;i<MAX;i++){
        for (j=0;j<MAX;j++);
        printf("%d ",v[i][j]);
        putchar('\n');
    }
}

int main(){
    int x[][MAX] = {{1,2,3},{4,5,6},{7,8,9}}; /* Matriz de 3x3 */

    puts("MATRIZ INICIAL");
    imprime(x);
    transpor(x);
    puts("DEPOIS DA INVERSÃO");
    imprime(x);
}