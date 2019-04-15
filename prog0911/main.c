#include <stdio.h>

int Ler_Inteiro(char *Prompt)
{
    int n;
    do
        {
        printf(Prompt);
        scanf("%d",&n);
        }
    while (n<0);
    return n;

}

int main() {
    int Idade, Total;
    Idade = Ler_Inteiro("Introduza, a Idade: "50);
    Total = Ler_Inteiro("Qual o total a depositar?\n\t");


}