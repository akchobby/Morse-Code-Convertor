#include "common.h"

void print_msg(char *msg){
	int string_end=0;
	for(int i = 4; i>= 0;i--){
		if(msg[i] =='0'){
			i--;
			string_end =1;
		}
		if (string_end == 1 ){
			printf("%c",msg[i]);
		}
	}
	printf(" ");	
}


void ascii_to_morse(char *msg, char *encoder){
	printf("Encoded Message: ");
	while((*msg) != '\0'){
		int i,j=0;	
		char morse_set[5] = {};
		for(i=0;i<32;i++){
			if((*(encoder+i)) == (*msg)){
				break;					
			}
		
		}
		while (i != 1){
			if(i%2 == 0){
				i /= 2;
				morse_set[j]= '.';
			}else{
				i = (i-1)/2;
				morse_set[j]= '-';
			}
			j++;
		}
		morse_set[j]='0';
		print_msg(morse_set);
		msg++;
	}
	printf("\n");
}

