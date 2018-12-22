#include <stdio.h>

int main(){
    char opcao;
    do {
        printf("\tM E N U P R I N C I P A L\n");
        printf("\n\n\t\tClientes");
        printf("\n\n\t\tFornecedores");
        printf("\n\n\t\tEncomendas");
        printf("\n\n\t\tSair");
        printf("\n\n\t\tOpcao:");
        scanf(" %c", &opcao);
        fflush(stdin); /* Limpar o Buffer do teclado */
        switch (opcao) {
            case 'c':
            case 'C': puts("Opcao CLIENTES");
                      break;
            case 'f':
            case 'F': puts("Opcao FORNECEDORES");
                      break;
            case 'e':
            case 'E': puts("Opcao ENCOMENDAS");
                      break;
            case 's':
            case 'S':
                      break; /* Nao faz nada */
            default:
                      puts("Opcao INVALIDA!!!");
        }
        getchar(); /* para a tela */
    }
    while (opcao != 's' && opcao != 'S');
}
