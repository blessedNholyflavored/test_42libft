#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	init_test(int *test, int a)
{
	int	i;

	i = 0;
	while (i < 44)
	{
		test[i] = a;
		i++;
	}
}

void	clear_buff(char *buff)
{
	int	i;

	i = 0;
	while (i < 199)
	{
		buff[i] = '\0';
		i++;
	}
}

void	clear_scanf()
{
	char	c;
	c = 'k';

	while (c != '\n')
		scanf("%c", &c);
}
void	init_fnc_name(char **tab)
{
	tab[0] = "bonus";
	tab[1] = "isalpha";
	tab[2] = "isdigit";
	tab[3] = "isalnum";
	tab[4] = "isascii";
	tab[5] = "isprint";
	tab[6] = "strlen";
	tab[7] = "memset";
	tab[8] = "bzero";
	tab[9] = "memcopy";
	tab[10] = "memmove";
	tab[11] = "strlcpy";
	tab[12] = "strlcat";
	tab[13] = "toupper";
	tab[14] = "tolower";
	tab[15] = "strchr";
	tab[16] = "strrchr";
	tab[17] = "strncmp";
	tab[18] = "memchr";
	tab[19] = "strnstr";
	tab[20] = "atoi";
	tab[21] = "calloc";
	tab[22] = "strdup";
	tab[23] = "substr";
	tab[24] = "strjoin";
	tab[25] = "strtrim";
	tab[26] = "split";
	tab[27] = "itoa";
	tab[28] = "strmapi";
	tab[29] = "striter";
	tab[30] = "putchar_fd";
	tab[31] = "putstr_fd";
	tab[32] = "putendl_fd";
	tab[33] = "putnbr_fd";
	tab[34] = "lstnew";
	tab[35] = "lstadd_front";
	tab[36] = "lstsize";
	tab[37] = "lstlast";
	tab[38] = "lstadd_back";
	tab[39] = "lstdelone";
	tab[40] = "lst_clear";
	tab[41] = "lstiter";
	tab[42] = "lstmap";
}

char	*strlow(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

void	set_test(int mode, int *test, char **fnc_name, char *arg2)
{
	/*
	int	i;

	i = 1;
	if (mode == 2)
	{
		init_test(test, 0);
		if (strstr(arg2, fnc_name[0]) != '\0')
		{
			int	a;

			a = 34;
			while (a < 44)
			{
				test[a] = 1;
				a++;
			}
		}
		while (fnc_name[i])
		{
			if (strstr(arg2, fnc_name[i]) != '\0')
				test[i] = 1;
			i++;
		}
	}

	if (mode == 3)
	{
		init_test(test, 1);
		if (strstr(arg2, fnc_name[0]) != '\0')
		{
			int	a;

			a = 34;
			while (a < 44)
			{
				test[a] = 0;
				a++;
			}
		}
		while (fnc_name[i])
		{
			if (strstr(arg2, fnc_name[i]) != '\0')
				test[i] = 0;
			i++;
		}
	}*/
}


int	help_mode(char *arg1, char *arg2, char *arg3)
{
	char	buff[200];
	int	r = 0;

	system("clear");
	printf("Bonjour\nSi cette page est affichée, ca veut dire que vous n'avez pas mis d'argument au lancement de ce programme ou que vous ne vous en souvenez plus, en tout cas les voicis:\n\n");

	printf("\033[0;31m");
	printf("PREMIER ARGUMENT:\n");
	printf("\033[0m");

	printf("\"all\":\t\tPermet de faire un test complet, ne necessite pas de deuxieme argument.\n");

	printf("\"only\":\t\tPermet de faire un test avec seulement les fonction entrees dans le deuxieme parametre.\n");
	printf("\"without\":\tPermet de faire un test sans les fonctions entrees dans le deuxieme parametre.\n");

	printf("\"help\":\tPermet de voir cette page\n\n");

	printf("\033[0;31m");
	printf("DEUXIEME ARGUEMENT:\n");
	printf("\033[0m");

	printf("Le deuxieme argument est une chaine de caractere avec le nom des fonctions, sans le \"ft_\", que vous voulez inclure/exclure de votre test separes par des whitespaces. \"bonus\" inclus/exclus tous les bonus d'un coup.\n\n");

	printf("\033[0;31m");
	printf("TROISIEME ARGUEMENT (facultatif):\n");
	printf("\033[0m");

	printf("Si vous metez \"detail\" en dernier argument, le detail des test sera montre apres les resultats.\n\n");
	
	while (r == 0)
	{
		clear_buff(buff);
		printf("Veuillez entrer le premier argument souhaité:\n");
		scanf("%s", buff);
		clear_scanf();
		arg1 = strdup(buff);
		clear_buff(buff);
		printf("Si vous etes sur de votre argument \"%s\", entrez \'y\':\n", arg1);
		scanf("%c", buff);
		clear_scanf();
		if (buff[0] == 'y' || buff [0] == 'Y')
			r = 1;
	}
	r = 0;
	while (r == 0)
	{
		clear_buff(buff);
		printf("Veuillez entrer le second argument souhaité:\n");
		scanf("%s", buff);
		clear_scanf();
		arg1 = strdup(buff);
		clear_buff(buff);
		printf("Si vous etes sur de votre argument \"%s\", entrez \'y\':\n", arg1);
		scanf("%c", buff);
		clear_scanf();
		if (buff[0] == 'y' || buff [0] == 'Y')
			r = 1;
	}
	r = 0;
	while (r == 0)
	{
		clear_buff(buff);
		printf("Veuillez entrer le troisieme argument souhaité:\n");
		scanf("%s", buff);
		clear_scanf();
		arg1 = strdup(buff);
		clear_buff(buff);
		printf("Si vous etes sur de votre argument \"%s\", entrez \'y\':\n", arg1);
		scanf("%c", buff);
		clear_scanf();
		if (buff[0] == 'y' || buff [0] == 'Y')
			r = 1;
	}
	r = 0;
}

int	get_mode(char *arg2)
{
	if (strcmp(strlow(arg2), "all") == 0)
		return (1);
	if (strcmp(strlow(arg2), "only") == 0)
		return (2);
	if (strcmp(strlow(arg2), "without") == 0)
		return (3);
	if (strcmp(strlow(arg2), "help") == 0) 
		return (4);
	return (0);
}

int	main(int argc, char **argv)
{
	int	mode;
	int	test[43];
	char	*fnc_name[43];
	int	detail;
	char	*arg1;
	char	*arg2;
	char	*arg3;

	detail = 0;
	mode = 0;
	init_fnc_name(fnc_name);

	if (argc == 1)
	{
		while (mode == 0)
		{
			mode = help_mode(arg1, arg2, arg3);
		}
		//test(test_tab, details)
		

		if (argc > 1)
		{
			mode = get_mode(argv[1]);

/*			if (argc > 2)
			{
				mode = get_mode(argv[1]);
				if (mode == 2 || mode == 3)
				{
					set_test(mode, test, fnc_name, argv[2]);
				}
				if (argc > 3)
				{
					if (strcmp(strlow(argv[3]), "detail") == 0)
						detail = 1;
				}
			} */
		}
	}
	//test_fnc(mode, detail, test, fnc_name);
	return (0);
}
