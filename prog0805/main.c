#include <stdio.h>


int main()
{
    int x = 5;
    int *ptr_x; /*Ponteiro para x*/
    int **ptr_prt_x;    /*Ponteiro para ponteiro de x*/

    /*Carga inicial dos ponteiros */

    ptr_x = &x;
    ptr_prt_x = &ptr_x;

    printf("x = %d - &x = %ld\n",x,&x);
    printf("x = %d - &x = %ld\n",*ptr_x,ptr_x);
    printf("x = %d - &x = %ld\n",**ptr_prt_x,*ptr_prt_x);
}
