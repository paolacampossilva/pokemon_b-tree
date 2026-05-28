#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "b_tree.h" 

node* new_node(int children_count, int size) {
    node *new = (node*) malloc(sizeof(node));
    
    if (new != NULL){
        new->pokemon_count = 0;
        new->is_leaf = 1;
        new->children = (node**) malloc(children_count * sizeof(node*));

        if (new->children != NULL){
            for(int i = 0; i < children_count;i++)
                new->children[i] = NULL;

            new->pokemon_array = (char (*) [STRING_SYZE]) malloc(size * sizeof(char[STRING_SYZE]));

            if (new->pokemon_array != NULL) return new;
            
            free(new->pokemon_array);
        }
        free(new->children);
    } 
    free(new);

    return NULL;
}

node* search_tree(node *root, char *poke_name) {
    node *p = root; 
    int index;

    while (p != NULL){
        index = search_in_node(p, poke_name);
        
        if (index < p->pokemon_count && strcmp(poke_name, p->pokemon_array[index]) == 0) return p;
        
        if (p->is_leaf) return NULL;

        p = p->children[index];
    }
    return NULL;
}

int search_in_node(node* node, char *poke_name){
    int i = 0;
    while (i < node->pokemon_count){
        if (strcmp(node->pokemon_array[i],poke_name) > 0) break;

        i++;
    }
    return i;
}

void split_child(node *parent, int index, node *child) {
    // Your code to split a node goes here
}

void insert_tree(node **root, char *pokemon) {
    // Your code to insert goes here
}

void insert_child(node *parent, node *child) {
    // Your code to insert a child goes here
}

void create_tree(node **root) {
    char poke_name[STRING_SYZE];

    FILE *pokemon = load_pokemon_file();

    while (fgets(poke_name, STRING_SYZE, pokemon) != NULL) {
        insert_tree(root, poke_name);
    }

    close_pokemon_file(pokemon);
}

void print_tree(node *root, int level, int max_children) {
    if (root == NULL) return;

    for (int i = 0; i < level; i++) 
        printf("  ");

    printf("| ");
    for (int i = 0; i < root->pokemon_count; i++)
        printf("%s ", root->pokemon_array[i]);
    printf("|\n");
    
    if (!root->is_leaf) {
        for (int i = 0; i < max_children; i++) {
            if (root->children[i] == NULL) break;

            print_tree(root->children[i], level + 1, max_children);
        }
    }
}

void destroy_tree(node *root, int max_children) {
    if (root == NULL) return;
    
    for (int i = 0; i < max_children; i++)
        destroy_tree(root->children[i], max_children);

    free(root->pokemon_array); free(root->children); free(root);
}

int get_max_children(int d) {
    return (2 * d) + 1;
}
