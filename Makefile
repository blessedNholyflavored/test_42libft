CC = gcc

SRC = srcs/main.c \
	srcs/init.c	\
	srcs/output.c	\
	srcs/rest.c	\
	srcs/test.c

FT = ft/ft_isalpha.c		\
	ft/ft_isdigit.c		\
	ft/ft_isascii.c 	\
	ft/ft_isalnum.c		\
	ft/ft_isprint.c 	\
	ft/ft_strlen.c		\
	ft/ft_memset.c		\
	ft/ft_strlcpy.c		\
	ft/ft_strlcat.c		\
	ft/ft_toupper.c		\
	ft/ft_tolower.c		\
	ft/ft_strchr.c		\
	ft/ft_strrchr.c		\
	ft/ft_strncmp.c		\
	ft/ft_strnstr.c		\
	ft/ft_atoi.c		\
	ft/ft_calloc.c		\
	ft/ft_strdup.c		\
	ft/ft_substr.c		\
	ft/ft_strjoin.c		\
	ft/ft_strtrim.c		\
	ft/ft_split.c		\
	ft/ft_itoa.c		\
	ft/ft_strmapi.c		\
	ft/ft_striteri.c	\
	ft/ft_putchar_fd.c	\
	ft/ft_putstr_fd.c	\

OBJ = ${SRC:.c=.o}

FTOBJ = ${FT:.c=.o}

NAME = libtest

all: ${NAME}

${NAME}: ${OBJ} ${FTOBJ}
	${CC} ${OBJ} ${FTOBJ} -o ${NAME} -lbsd 

clean:
	rm -rf ${OBJ} ${NAME}

#ft: ${FT}

#${FT}: ${FTOBJ}
#	${CC} ${OBJ} ${FTOBJ} -o ${NAME} 	 

re: clean all

.PHONY: all clean re

.SILENT: all clean re
