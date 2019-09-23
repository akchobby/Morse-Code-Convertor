#include "common.h"



void ascii_to_morse(char *msg, char *encoder){
	printf("Encoded Message: ");
	while((*msg) != '\0'){
		int i;	
		for(i=0;i<32;i++){
			if((*(encoder+i)) == (*msg)){
				break;					
			}
		
		}
		while (i != 1){
			if(i%2 == 0){
				i /= 2;
				printf(".");
			}else{
				i = (i-1)/2;
				printf("-");
			}
		}
		printf(" ");
		msg++;
	}
	printf("\n");
}
