#ifndef __LIBTEST_H__
#define __LIBTEST_H__

//Librairies
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/fcntl.h>
#include "ft/libft.h"

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
char	minus_i(unsigned int i, char c);
void	chelou(unsigned int i, char *c);
char	*strlow(char *str);
int	get_mode(char *arg2);
void	duplik_putchar_fd(char c, int fd);
#endif
