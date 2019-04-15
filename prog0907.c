#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	int i, total;
	argv++; /* Passar ao argv[1] */
	for (total=0; *argv!=NULL; argv++)   
		total+=atoi(*argv);		 
	printf("%d\n",total);
}