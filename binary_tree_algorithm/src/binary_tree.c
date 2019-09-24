#include "common.h"
#include "binary_tree.h"

node_t* new_node(char chr) 
{ 
	node_t* node = (node_t*)malloc(sizeof(node_t)); 
	node->alpha = chr;
	node->left = node->right = NULL; 
	return (node); 
} 

node_t* insert(char arr[], node_t* root, int i, int n) 
{ 

    if (i < n) 
    { 
        node_t* temp = new_node(arr[i]); 
        root = temp;
        root->left = insert(arr,root->left, 2 * i , n); 
        root->right = insert(arr,root->right, 2 * i + 1, n); 
    } 
    return root; 
} 



void destroy_tree(node_t *tree){
	if (tree != NULL){
		destroy_tree(tree->left);
		destroy_tree(tree->right);
		free(tree);	
	}

}
