#ifndef COMMON_H_
#define COMMON_H_

#include <stdio.h>
#include <stdlib.h>


void move_left(int *i,int *j, int *step);
void move_right(int *i,int *j, int *step);

void ascii_to_morse(char *msg, char *encoder);

#endif /* COMMON_H */
