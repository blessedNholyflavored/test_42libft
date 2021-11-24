SRC =  ft_isalpha.c \
	ft_itoa.c		\
	ft_calloc.c		\
	ft_putendl_fd.c	\
	ft_putchar_fd.c	\
	ft_putnbr_fd.c	\
	ft_putstr_fd.c	\
	ft_isascii.c	\
	ft_atoi.c		\
	ft_strmapi.c	\
	ft_striteri.c	\
	ft_strtrim.c	\
	ft_isalnum.c	\
	ft_strlen.c		\
	ft_strjoin.c	\
	ft_strncmp.c	\
	ft_strdup.c		\
	ft_toupper.c	\
	ft_tolower.c	\
	ft_strrchr.c	\
	ft_strchr.c		\
	ft_substr.c		\
	ft_strnstr.c	\
	ft_strlcat.c	\
	ft_memset.c		\
	ft_isdigit.c	\
	ft_split.c		\
	ft_isprint.c	\
	ft_strlcpy.c	\
	ft_bzero.c		\
	ft_memcpy.c		\
	ft_memmove.c	\

OBJ = ${SRC:.c=.o}

NAME = libft.a

all: ${NAME}

${NAME}: ${OBJ}
	ar rc ${NAME} ${OBJ}
	ranlib ${NAME}

re:
	fclean all

clean:
	rm ${OBJ}

fclean:
	rm -f ${OBJ}

.PHONY: all clean fclean re
