#include "common.h"
#include "binary_tree.h"

void morse_to_ascii(char *msg, node_t *tree){
	_Bool fail = 0;
	printf("Decoded Msg: ");
	do{
		node_t* temp =tree;
		while((*msg) != ' ' && (!fail)){
			if((temp->right) == NULL || (temp->left) == NULL){
			#ifdef DEBUG
				printf("\nERROR:Check msg inputs or Tree may have errors\n");
		
			#endif
				printf("\nERROR: Please don't forget SPACE at the end of input!\n");
				fail = 1;
				break;
			}
			if((*msg) == '-'){
				temp = temp->right;
			}else if((*msg) == '.'){
				temp = temp->left;
			}else if((*msg) != ' '){
				printf("\nERROR: Check Morse Code\n");
				fail = 1;
			}
			msg++;
		}
		msg++;
		if(!fail){
			printf("%c",temp->alpha);		
		}
	}while((*msg) != '\0'&& (!fail));
	printf("\n");
}

