#include <stdio.h>
main(){
	int dia,mes,ano;
	printf("Data: dd mm aaaa: ");
	scanf("%d %d %d",&dia,&mes,&ano);
	switch(mes){
		case 2:
			if(dia >= 1 && dia <= 28 +((ano%4==0&&ano%100!=0) || ano%400==0)){
				printf("Data valida");
			} else {
				printf("Data invalida");
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (dia >= 1 && dia <= 30){
				printf("Data valida");
			}else {
				printf("Data invalida");
			}
			break;
		default :
			if(mes < 1 || mes >12){
				printf("Data valida");
			} else if (dia >= 1 && dia <= 31){
				printf("Data valida");
			} else {
				printf("Data invalida");
			}
	}
}
