#ifndef __TEST_LIBFT_H__
#define __TEST_LIBFT_H__

//Librairies
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

//Variables
#define DEPTH 50
//Fonctions

//init.c
void	set_test(int mode, int *test, char **fnc_name, char *arg2);
void	init_test(int *test, int a);
void	init_fnc_name(char **tab);
//output.c
int	help_mode();
void	test_output(char *str, int err, int layer);
void	print_box(int err);
//test.c 
//rest.c
char	*strlow(char *str);
int	get_mode(char *arg2);
#endif
