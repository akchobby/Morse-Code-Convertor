#include "binary_tree.h"

node_t* new_node(char chr,int i) 
{ 
	node_t* node = (node_t*)malloc(sizeof(node_t)); 
	node->alpha = chr;
	node->index = i;
	node->left = node->right = NULL; 
	return (node); 
} 

node_t* insert(char arr[], node_t* root, int i, int n) 
{ 

    if (i < n) 
    { 
        node_t* temp = new_node(arr[i],i); 
        root = temp;
        root->left = insert(arr,root->left, 2 * i , n); 
        root->right = insert(arr,root->right, 2 * i + 1, n); 
    } 
    return root; 
} 

void search(node_t* root,char chr, _Bool *found,int *i)  //Not a true binary search, just DFS hence O(V+E)
{  
    if (root != NULL && !(*found)) 
    { 
       	if(root->alpha == chr){
		*i = root->index; 
		*found = 1;
	}else {
		
		if(root->left !=NULL){
        		search(root->left,chr, found, i);
		}
		if(root->right !=NULL){ 
        		search(root->right,chr, found, i);
		}
	}
    }

}


void destroy_tree(node_t *tree){
	if (tree != NULL){
		destroy_tree(tree->left);
		destroy_tree(tree->right);
		free(tree);	
	}

}
