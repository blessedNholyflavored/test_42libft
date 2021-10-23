CC = gcc

SRC = srcs/main.c \
	srcs/init.c	\
	srcs/output.c \
	srcs/rest.c

OBJ = ${SRC:.c=.o}

NAME = libtest

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${OBJ} -o ${NAME}
	rm -rf ${OBJ}

clean:
	rm -rf ${OBJ}

re: clean all

.PHONY: all clean re
