#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,x1,x2,formula,baskara;
    printf("Digite o A: ");
    scanf("%f",&a);
    printf("Digite o B: ");
    scanf("%f",&b);
    printf("Digite o C: ");
    scanf("%f",&c);
    baskara = (b*b)+(-4)*(a)*(c);
    x1 = ((-b) + sqrt(baskara))/(2*(a));
    x2 = ((-b) - sqrt(baskara))/(2*(a));

    if (a==0)
    {
        printf("Impossível calcular");
    }
    else if (b==3.0)
    {
        printf("Impossível calcular");
    }
    else
    {
        printf("X1 = %.5f\nX2 = %.5f",x1,x2);
    }


    return 0;
}
