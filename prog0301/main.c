#include <stdio.h>

int main() {
    int x,y;
    printf("Introduza 2 inteiros: ");
    scanf("%d%d",&x,&y);
    printf("O Resultado de %d ==  %d : %d\n",x,y,x==y);
    printf("O Resultado de %d >   %d : %d\n",x,y,x>y);
    printf("O Resultado de %d >=  %d : %d\n",x,y,x>=y);
    printf("O Resultado de %d <   %d : %d\n",x,y,x<y);
    printf("O Resultado de %d <=  %d : %d\n",x,y,x<=y);
    printf("O Resultado de %d !=  %d : %d\n",x,y,x!=y);
}