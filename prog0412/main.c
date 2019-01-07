#include <stdio.h>

int main() {
    int i;
    for (i=1; i<=100;i=i+1)
        if (i==60)
            break;
        else
            if (i%2==1) /* se i for ímpar */
                continue;
            else
                printf("%2d\n",i);
    printf("FIM DO LAÇO\n");

}