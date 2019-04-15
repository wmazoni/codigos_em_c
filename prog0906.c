#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	int i, total;
	for (i=1, total=0; i<argc; i++)   /* Todos, exceto o argv[0] */
		total+=atoi(argv[i]);		  /* Acumular os valores */
	printf("%d\n",total);
}