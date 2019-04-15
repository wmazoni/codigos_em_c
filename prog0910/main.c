#include <stdio.h>

int main(int argc, char *argv[]) {
    int i =0;
    char *ptr; /* para auxiliar troca */

    for (i=0; i<argc/2; i++)
    {
        ptr = argv[i];
        argv[i] = argv[argc-i-1];
        argv[argc-i-1] = ptr;
    }
    for (i=0;i<argc;i++)
        puts(argv[i]);
}