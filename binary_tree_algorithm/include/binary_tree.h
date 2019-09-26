#ifndef BINARY_TREE_H_
#define BINARY_TREE_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	char alpha;
	int index;
	struct node *left;
	struct node *right;

}node_t;


node_t* new_node(char chr,int i); 
node_t* insert(char arr[], node_t* root, int i, int n) ;
void search(node_t* root,char chr, _Bool *found,int *i) ;
void destroy_tree(node_t *tree);

void morse_to_ascii(char *msg, node_t* tree);
void ascii_to_morse(char *msg, char *encoder, node_t* root);



#endif /* BINARY_TREE_H_ */
