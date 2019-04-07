#include <stdio.h>
#include <stdlib.h>

int main()
{
    int in=0, out=0,N,X;

    printf("Valor: ");
    scanf("%d",&N);
    for (int i=0;i<N;i++)
    {
        printf("Digite o X: ");
        scanf("%d",&X);
        if ((X>=10) & (X<=20))
        {
            in++;
        }
        else
        {
            out++;
        }

    }
    printf("%d: in\n",in);
    printf("%d: out",out);
    return 0;
}
