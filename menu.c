#include <stdio.h>
#include "menu.h"

int menu() {
    int op;

    printf("\n// ----- // ----- // ÁRVORE B // ----- // ----- //\n");
    printf("[1] - Buscar\n");
    printf("[2] - Inserir\n");
    printf("[9] - Finalizar\n");
    printf("-------------------------------\n");
    printf("Entre com a sua opção: ");
    scanf("%d", &op);

    printf("\n");

    return op;
}

void run_options(int d) {
    while (1) {
        switch(menu()) {
            case 1: // Buscar
                break;
            
            case 2: // Inserir
                break;

            case 9: // Finalizar
                exit(0);

            default:
                printf("\nOpcao invalida! Tente novamente...\n");
                break;
        }
    }
}

int get_d() {
    int d;

    printf("-------------------------------\n");
    printf("\nEntre com o 'd' desejado: ");
    scanf("%d", &d);
    printf("\n");
    printf("-------------------------------\n");

    return d;
}
