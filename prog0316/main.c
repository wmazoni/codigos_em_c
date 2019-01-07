#include <stdio.h>

int main() {
    int num1,num2,res=0;
    char op;
    printf("Escreva uma Expressão: ");
    scanf("%d %c %d",&num1,&op,&num2);
    switch(op){
        case '+' : res = num1+num2;
            break;
        case '-' : res = num1-num2;
            break;
        case '*' :
        case 'x' :
        case 'X' : res = num1*num2;
            break;
        case '/' :
        case '\\' :
        case ':' : res = num1/num2;
            break;
    }
    printf("%d %c %d = %d\n",num1,op,num2,res);
}