#ifndef __TEST_LIBFT_H__
#define __TEST_LIBFT_H__

//Librairies
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

//Fonctions
//init.c
void	set_test(int mode, int *test, char **fnc_name, char *arg2);
void	init_test(int *test, int a);
void	init_fnc_name(char **tab);
//output.c
int	help_mode(char *arg1, char *arg2, char *arg3);
//rest.c
void	clear_scanf();
void	clear_buff(char *buff);
void	put_str(char *str);
char	*strlow(char *str);
int	get_mode(char *arg2);
#endif
