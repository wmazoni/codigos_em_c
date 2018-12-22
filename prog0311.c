#include <stdio.h>
main()
{
	char est_civil;
	puts("Qual o Estado Civil: ");
	est_civil=getchar();
	if(est_civil=='S' || est_civil=='s')
		printf("Solteiro");
	else 
		if(est_civil=='C' || est_civil=='c')
			printf("Casado");
		else 
		if(est_civil=='D' || est_civil=='d')
			printf("Divorciado");
		else 
			if (est_civil=='V' || est_civil=='v')
				printf("Viuvo");
			else
				printf("Estado Civil Invalido");
	printf("\n");
}
