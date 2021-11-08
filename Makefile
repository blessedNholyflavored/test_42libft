CC = gcc

SRC = srcs/main.c \
	srcs/init.c	\
	srcs/output.c	\
	srcs/rest.c	\
	srcs/test.c

FT = ft/ft_isalpha.c	\
	ft/ft_isdigit.c	\
	ft/ft_isascii.c \
	ft/ft_isalnum.c	\
	ft/ft_isprint.c \
	ft/ft_strlen.c

OBJ = ${SRC:.c=.o}

FTOBJ = ${FT:.c=.o}

NAME = libtest

all: ${NAME}

${NAME}: ${OBJ} ${FTOBJ}
	${CC} ${OBJ} ${FTOBJ} -o ${NAME} 

clean:
	rm -rf ${OBJ} ${NAME}

#ft: ${FT}

#${FT}: ${FTOBJ}
#	${CC} ${OBJ} ${FTOBJ} -o ${NAME} 	 

re: clean all

.PHONY: all clean re

.SILENT: all clean re
