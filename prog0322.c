#include <stdio.h>
main(){
	int x;
	printf("Numero: ");
	scanf("%d",&x);
	switch (x){
		case 0:
			printf("%d igual a zero",x);
			break;
		default :
			printf("%d diferente de zero",x);
	}
}
