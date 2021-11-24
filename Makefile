CC = gcc

SRC = srcs/main.c \
	srcs/init.c	\
	srcs/output.c	\
	srcs/rest.c	\
	srcs/test.c \

OBJ = ${SRC:.c=.o}

BONUSOBJ = ${BONUS:.c=.o}

NAME = libtest

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${OBJ}  -o ${NAME} -Lft/ -lft

clean:
	rm -rf ${OBJ} ${NAME}
	rm -rf ft/ft*.o

re: clean all

.PHONY: all clean re 

.SILENT: all clean re 
