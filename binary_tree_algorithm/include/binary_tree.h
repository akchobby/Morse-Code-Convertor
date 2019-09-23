#ifndef BINARY_TREE_H_
#define BINARY_TREE_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	char alpha;
	int val;
	struct node *left;
	struct node *right;

}node_t;


node_t* new_node(char chr,int data); 
node_t* insert(char arr[], node_t* root, int i, int n) ;
void destroy_tree(node_t *tree);

void morse_to_ascii(char *msg, node_t* tree);



#endif /* BINARY_TREE_H_ */
