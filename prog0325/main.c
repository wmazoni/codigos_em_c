#include <stdio.h>

int main() {
    int dia,mes,ano;
    printf("Data: dd mm aaaa: ");
    scanf("%d %d %d",&dia,&mes,&ano);
    switch(mes){
        case 2: if (dia >=1 && dia <= 28 +((ano%4==0&&ano%100!=0)|| ano%400==0))
                printf("Data Válida");
        else
                printf("Data Inválida");
        break;
        case 4:
        case 6:
        case 9:
        case 11: if (dia >= 1 && dia <= 30)
                printf("Data Válida");
        else
                printf("Data Inválida");
        break;
        default: if (mes <1 || mes > 12)
                printf("Data Inválida");
                else
                printf("Data Inválida");

    }
}