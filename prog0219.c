#include <stdio.h>
main(){
	float x;
	printf("Introduza um no. real: ");
	scanf("%f",&x);
	printf("Parte Inteira:                                                                %d\n",(int)x);
	printf("Parte Fracionária:                                                            %f\n",x - ((int) x));
}
