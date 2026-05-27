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

            if (new->pokemon_array != NULL) 
                return new;
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
        
        if (index < p->pokemon_count && strcmp(poke_name, p->pokemon_array[index]) == 0) 
            return p;
        
        if (p->is_leaf)
            return NULL;
        p = p->children[index];
    }
    return NULL;
}

int search_in_node(node* node, char *poke_name){
    int i = 0;
    while (i < node->pokemon_count){
        if (strcmp(node->pokemon_array[i],poke_name) > 0)
            break;
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
    // Your code to initialize the tree goes here
}

void print_tree(node *root) {
    // Your code to print goes here
}

void destroy_tree(node *root) {
    // Your code to free memory goes here
}

