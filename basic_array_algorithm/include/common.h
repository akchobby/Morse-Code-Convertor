#ifndef COMMON_H_
#define COMMON_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_msg(char *arr);
void move_left(int *i,int *j, int *step);
void move_right(int *i,int *j, int *step);

void ascii_to_morse(char *msg, char *encoder);
void morse_to_ascii(char *msg, char decoderTree[][31]);



#endif /* COMMON_H */
