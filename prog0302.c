#include <stdio.h>
main(){
	int x;
	printf("Introduza um no.: ");
	scanf("%d",&x);
	if(x>=0){
		printf("Numero positivo\n");
	}else{
		printf("Numero negativo\n");
	}
}
