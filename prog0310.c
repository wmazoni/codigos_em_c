#include <stdio.h>
#include <locale.h>
main()
{
	float salario;
	setlocale(LC_ALL,"Portuguese");
	printf("Qual o Salário: ");
	scanf("%f",&salario);
	if(salario>1000)
	{
		salario=salario*1.05;
	}
	else
	{
		salario=salario*1.07;
	}
	printf("Novo Salário: %.2f\n",salario);
}
