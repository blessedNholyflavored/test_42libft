#ifndef __LIBTEST_H__
#define __LIBTEST_H__

//Librairies
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <bsd/string.h>

//Variables
#define DEPTH 50
//Fonctions

//init.c
void	set_test(int mode, int *test, char **fnc_name, char *arg2);
void	init_test(int *test, int a);
//output.c
int	help_mode();
void	test_output(char *str, int err, int layer);
void	print_box(int err);
//test.c 
int	big_test(int *test, int detail);
//rest.c
char	*strlow(char *str);
int	get_mode(char *arg2);
//ft
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	ft_toupper(int c);
char	ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
#endif
