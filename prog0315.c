#include <stdio.h>
main(){
	float salario,imposto=0.0;
	char sexo;
	
	printf("Introduza o salario: ");
	scanf("%f",&salario);
	printf("Qual o sexo: ");
	scanf(" %c",&sexo);
	
	switch(sexo){
		case 'm':
		case 'M':
			imposto=imposto+0.05;
		case 'f':
		case 'F':
			imposto=imposto+0.10;
	}
	printf("Imposto %.2f\n",salario*imposto);
}
