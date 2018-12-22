#include <stdio.h>
main()
{
	float salario,taxa;
	printf("Qual o salario: ");
	scanf("%f",&salario);
	if(salario<1000)
		taxa=.05;
	else if (salario<5000)
		taxa=.11;
	else
		taxa=.35;
	
	printf("Salario: %.2f Imposto: %.2f Liquido: %.2f\n",salario,salario*taxa,salario*(1.0-taxa));	
}
