// node.h

#ifndef NODE_H
#define NODE_H
#define STRING_SYZE 13

struct node{
    char (*pokemon_array)[STRING_SYZE];
    struct node **children;
    int pokemon_count, is_leaf; 

}; typedef struct  node node;

/* Ideia de sruct
struct tree {
    node* root;
    int d;
};
*/

#endif