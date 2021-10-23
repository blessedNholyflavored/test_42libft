CC = gcc

SRC = test_libft.c \
	init.c	\
	output.c

OBJ = ${SRC:.c=.o}

NAME = libtest

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${OBJ} -o ${NAME}

clean:
	rm -rf ${OBJ}

re: clean all

.PHONY: all clean re
