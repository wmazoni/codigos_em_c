#include <stdio.h>
main(){
	int x;
	printf("Introduza no.: ");
	scanf("%d",&x);
	if(x!=0){
		printf("%d nao e zero!!!\n",x);
	}else{
		printf("%d e igual a zero!!!\n",x);
	}
}
