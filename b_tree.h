// b_tree.h
#ifndef BTREE_H
#define BTREE_H
#include "node.h"
#define INVALID -1

node* new_node();
void create_tree(node **root);
void search_tree(node *root, char *pokemon);
void insert_tree(node **root, char *pokemon);
void split_child(node *parent, int index, node *child);
void insert_child(node *parent, node *child);
void print_tree(node *root);
void destroy_tree(node *root);


#endif