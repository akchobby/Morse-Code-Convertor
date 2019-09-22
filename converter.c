#include <stdio.h>

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

int main(void){
	char asciiMat[5][31] = {{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','!',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
		      	        {' ',' ',' ',' ',' ',' ',' ','E',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','T',' ',' ',' ',' ',' ',' ',' '},
			        {' ',' ',' ','I',' ',' ',' ',' ',' ',' ',' ','A',' ',' ',' ',' ',' ',' ',' ','N',' ',' ',' ',' ',' ',' ',' ','M',' ',' ',' '},
		  	        {' ','S',' ',' ',' ','U',' ',' ',' ','R',' ',' ',' ','W',' ',' ',' ','D',' ',' ',' ','K',' ',' ',' ','G',' ',' ',' ','O',' '},
			        {'H',' ','V',' ','F',' ','*',' ','L',' ','*',' ','P',' ','J',' ','B',' ','X',' ','C',' ','Y',' ','Z',' ','Q',' ','*',' ',' '}};
	char encoder_string[] = "**ETIANMSURWDKGOHVF?L?PJBXCYZQ? ";
	char morse_msg[] = "--. --- --- -.. ---- .--- --- -... ---- --. ..- -.-- ... ";
	char ascii_msg[] = "GOOD JOB GUYS";
	morse_to_ascii(morse_msg, asciiMat);
	ascii_to_morse(ascii_msg, encoder_string);
  	return 0;
}


