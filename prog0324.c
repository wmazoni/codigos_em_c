#include <stdio.h>
/*
Versao 1
main(){
	int mes, n_dias;
	printf("Numero do mes: ");
	scanf("%d",&mes);
	if (mes==2){
		n_dias=28;
	} else if (mes ==4 || mes == 6 || mes == 9 || mes == 11){
		n_dias = 30;
	} else {
		n_dias = 31;
	}
	printf("O mes %d tem %d dias\n",mes,n_dias);
}
*/
/*
Versao 2
main(){
	int mes, n_dias;
	printf("Numero do mes: ");
	scanf("%d",&mes);
	switch (mes){
		case 2:
			n_dias=28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			n_dias==30;
			break;
		default :
			n_dias=31;
			break;
	}
	printf("O mes %d tem %d dias\n",mes,n_dias);
}
*/
main(){
	int mes,n_dias;
	printf("Numero do mes");
	scanf("%d",&mes);
	switch (mes){
		case 1: /* 31 dias */
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			n_dias = n_dias + 1;
		case 4: /* 30 dias */
		case 6:
		case 9:
		case 11:
			n_dias = n_dias + 2;
		default:
			n_dias = n_dias + 28;
	}
	printf("O mes %d tem %d dias\n",mes,n_dias);
}
