#Author Anil Kumar Chavali

CC = gcc
LD = gcc

SRC_DIR = src/
BIN_DIR = bin/
OBJ_DIR = $(BIN_DIR)objects/

#header files directory
INCLUDES = -I include/

CFLAGS = -std=c99 -Wall -g -DDEBUG


#All the sources files
SRCS = $(wildcard $(SRC_DIR)*.c)

#Define Executable
_MAIN = convert 
MAIN =$(addprefix $(BIN_DIR),$(_MAIN))

.PHONY:  clean all
.DEFAULT_GOAL:= all

all: $(MAIN)
	@echo Compiler made binary

$(MAIN):$(SRCS)
	$(CC) $(CFLAGS) $(INCLUDES)  -o $(MAIN) $^
	@echo Compiling
clean:
	rm-f *.o


