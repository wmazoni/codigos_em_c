#include <stdio.h>

int main() {
    int i;
    for (i=0 ; i<=255 ; i++)
        printf("%3d —> %c\n",i, (char) i);
}