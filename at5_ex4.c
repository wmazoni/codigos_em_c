#include <conio.h>
#include <stdio.h>
void main(){
	int c,d;
	printf("\n Pressione uma tecla ou combinacao de teclas: ");
	printf("\n Pressione [esc] para terminar! \n");
	do{													// faz...
		c=getch();										// leitura do primeiro codigo
		if(c==0){										// se for codigo extendido...
			d=getch();									// le segundo codigo.
			printf("%3d %3d codigo extendido\n",c,d);
		}
		else {
			printf("%3d codigo normal\n",c);
		};
	}	while (c!=27);									// enquanto nao for...
}
