// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Arquivos
#include "load_pokemon_file.h"
#include "menu.h"

/* Autores
Paola Campos da Silva
João Pedro Huppes Arenales
*/

int main() {
    int d;

    printf("Entre com o 'd' desejado: ");
    scanf("%d", &d);
    printf("\n");

    run_options(d);

    return 0;
}
