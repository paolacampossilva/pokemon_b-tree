#include <stdio.h>

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
