// b_tree.h
#ifndef BTREE_H
#define BTREE_H
#include "node.h"

node* new_node();
void create_tree(node **root);
node* search_tree(node *root, char *poke_name);
void insert_tree(node **root, char *pokemon);
void split_child(node *parent, int index, node *child);
void insert_child(node *parent, node *child);
void print_tree(node *root, int level, int d);
void destroy_tree(node *root, int max_children);
int get_max_children(int d);

#endif
