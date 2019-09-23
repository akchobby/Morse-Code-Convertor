#include <string.h>

#include "common.h"
#include "binary_tree.h"

int main(int argc, char* argv[]){

	char encoder_string[32] = "**ETIANMSURWDKGOHVF?L?PJBXCYZQ? ";
	
	node_t* tree =NULL;
	tree = insert(encoder_string, tree, 1, 32); 

	if(argv[1] != NULL){
		if(argv[1][0] != '.' && argv[1][0] != '-'){
			ascii_to_morse(argv[1] , encoder_string);
			return 0;
		}

	}

	char morse_msg[] = "--. --- --- -.. ---- .--- --- -... ---- --. ..- -.-- ... ";
	morse_to_ascii(morse_msg, tree);

	destroy_tree(tree);

  	return 0;
}



