#include <stdio.h>
void main(){
	char c;
	printf("\nDigite uma frase: \n");
	do{
		c=getchar(); // leitura do buffer
		if(c>=97 && c<=122){ // se c é minusculo
			c-=32;           // transforma em maiusculo
		}
		putchar(c);
	}while (c != '\n');   
}
