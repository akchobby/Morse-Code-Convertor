#include "common.h"

int main(void){
	char asciiMat[5][31] = {{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','!',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
		      	        {' ',' ',' ',' ',' ',' ',' ','E',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','T',' ',' ',' ',' ',' ',' ',' '},
			        {' ',' ',' ','I',' ',' ',' ',' ',' ',' ',' ','A',' ',' ',' ',' ',' ',' ',' ','N',' ',' ',' ',' ',' ',' ',' ','M',' ',' ',' '},
		  	        {' ','S',' ',' ',' ','U',' ',' ',' ','R',' ',' ',' ','W',' ',' ',' ','D',' ',' ',' ','K',' ',' ',' ','G',' ',' ',' ','O',' '},
			        {'H',' ','V',' ','F',' ','*',' ','L',' ','*',' ','P',' ','J',' ','B',' ','X',' ','C',' ','Y',' ','Z',' ','Q',' ','*',' ',' '}};
	char encoder_string[] = "**ETIANMSURWDKGOHVF?L?PJBXCYZQ? ";
	char morse_msg[] = "--. --- --- -.. ---- .--- --- -... ---- --. ..- -.-- ... ";
	char ascii_msg[] = "THANK YOU MR LOCHIN";
	morse_to_ascii(morse_msg, asciiMat);
	ascii_to_morse(ascii_msg, encoder_string);
  	return 0;
}

