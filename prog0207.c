#include <stdio.h>

main (){
	float raio,perimetro;
	double pi=3.1415927,area;
	
	printf("Introduza o raio da circunfer�ncia: ");
	scanf("%f",&raio);
	area=pi*raio*raio;
	perimetro=2*pi*raio;
	
	printf("�rea = %f\nPer�metro = %f\n",area,perimetro);
}
