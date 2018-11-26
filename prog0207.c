#include <stdio.h>

main (){
	float raio,perimetro;
	double pi=3.1415927,area;
	
	printf("Introduza o raio da circunferência: ");
	scanf("%f",&raio);
	area=pi*raio*raio;
	perimetro=2*pi*raio;
	
	printf("Área = %f\nPerímetro = %f\n",area,perimetro);
}
