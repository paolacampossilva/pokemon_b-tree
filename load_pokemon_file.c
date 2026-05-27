#include <stdio.h>

FILE* load_pokemon_file() {
    FILE *pokemon;
    pokemon = fopen("pokemon_names.txt", "r");
    
    if (pokemon == NULL) {
        perror("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    return pokemon;
}

void close_pokemon_file(FILE *pokemon) {
    fclose(pokemon);
}
