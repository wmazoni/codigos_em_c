#include <stdio.h>

main(int argc, char *argv[])
{
int i;
for (i=0;i<argc;i++)
printf("%d- Par�metro = \"%s\"\n",i+1,argv[i]);
}