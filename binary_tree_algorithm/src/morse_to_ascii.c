#include "common.h"
#include "binary_tree.h"

void morse_to_ascii(char *msg, node_t *tree){
	
	printf("Decoded Msg: ");
	while((*msg) != '\0'){
		node_t* temp =tree;
		while((*msg) != ' '){
			#ifdef DEBUG
			if((temp->right) == NULL || (temp->left) == NULL){
				printf("\nERROR:Check msg inputs or encoder string.\nAfter bad char decoded msg: ");
			break;
			}
			#endif
			if((*msg) == '-'){
				temp = temp->right;
			}else if((*msg) == '.'){
				temp = temp->left;
			}
			msg++;
		}
		msg++;
		printf("%c",temp->alpha);		
			
			
	}
	printf("\n");
}

