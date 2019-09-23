#include "common.h"


void move_right(int *i, int *j, int *step){
	*i +=1;
	*step =*step/2;
	*j += *step;
}

void move_left(int *i,int *j, int *step){
	*i +=1;
	*step =*step/2;
	*j -= *step;
}

void morse_to_ascii(char *msg, char decoderTree[][31]){
	printf("Decoded Msg: ");
	while((*msg) != '\0'){
		int step = 16;
		int i=0,j=15;
		while((*msg) != ' '){
			if((*msg) == '-'){
				move_right(&i, &j, &step);
			}else if((*msg) == '.'){
				move_left(&i, &j, &step);
			}
			msg++;
		}
		msg++;
		#ifdef DEBUG
		if(i>4 || j>30){
			printf("\nERROR:Inputs exceeded,check msg inputs or decoder Tree");
			break;
		}
		#endif
		printf("%c",decoderTree[i][j]);		
			
			
	}
	printf("\n");
}

