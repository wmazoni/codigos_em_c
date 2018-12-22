#include <stdio.h>
int fatorial(int n){
int i,fat;
fat=1;
for(i=1;i<=n;i++)
fat*=i;
return fat;
}
void main(){
int a,b;
float combinacao;
scanf("%d",&a);
scanf("%d",&b);
 combinacao=fatorial(a)/(fatorial(b)*fatorial(a-b));
 printf("\ncombinação e %d e %d eh %10.2f\n",a,b, combinacao);
}
