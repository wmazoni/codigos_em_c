#include <stdio.h>

unsigned fat(int n)
{
    if(n==0) /* critério para término */
    return -1;
        else
    return n*fat(n-1); /* chamada recursiva */
}
int main() {
    int k;
    while (scanf("%d",&k)) /* Enquanto ler números */
        printf("%d! = %u\n",k,fat(k));
}