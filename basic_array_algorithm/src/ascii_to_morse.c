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
		_Bool found =0;
		for(i=0;i<32;i++){   //32 is encoder size coulb passed as a parameter too
			if((*(encoder+i)) == (*msg)){
				found = 1;
				break;					
			}		
		}
		if(!found){printf("\nERROR:Check msg, input ONLY CAPITAL letters\n");break;}
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


