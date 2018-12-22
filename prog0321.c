#include <stdio.h>
/*
Versao 1
main(){
	int x;
	printf("Numero: ");
	scanf("%d",&x);
	if(x==0){
		printf("%d eh igual a zero",x);
	}else {
		printf("%d diferente de zero",x);
	}
}
*/
/*
Versao 2
main(){
	int x;
	printf("Numero: ");
	scanf("%d",&x);
	if (!x){
		printf("Numero eh igual a zero\n");
	} else {
		printf("Numero nao eh igual a zero");
	}
}
*/
/*
Versao 3
main(){
	int x;
	printf("Numero: ");
	scanf("%d",&x);
	if (x != 0){
		printf("Numero nao eh igual a zero\n");
	} else {
		printf("Numero eh igual a zero\n");
	}
}
*/
main(){
	int x;
	printf("Numero: ");
	scanf("%d",&x);
	if (x){
		printf("Numero nao eh igual a zero");
	}else {
		printf("Numero eh igual a zero");
	}
}

