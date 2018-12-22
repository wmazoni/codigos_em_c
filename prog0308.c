#include <stdio.h>
main()
{
	int a,b;
	printf("Introduza dois no.: ");
	scanf("%d%d",&a,&b);
	if (a>=b)
	{
		if(b>10)
		printf("B e muito grande\n");
	}
	else
		printf("A tem um valor negativo\n");
}
