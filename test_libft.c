#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//test
int	help_mode(void)
{
	char	c;
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
	
	printf("Le deuxieme argument est une chaine de caractere avec le nom des fonctions, sans le \"ft_\", que vous voulez inclure/exclure de votre test separes par des whitespaces.\n\n");
	
	printf("\033[0;31m");
	printf("TROISIEME ARGUEMENT (facultatif):\n");
	printf("\033[0m");
	
	printf("Si vous metez \"detail\" en dernier argument, le detail des test sera montre apres les resultats.\n\n");
	
	printf("\nEntrez \"y\" pour continuer...\n");
	scanf("%c", &c);
	if (c == 'y' || c == 'Y')
		return (1);
	else
		return (0);
}

int	get_mode(char *arg2)
{
	if (strcmp(arg2, "all") == 0 || (strcmp(arg2, "All") == 0 || (strcmp(arg2, "ALL") == 0)
		return (1);
	if (strcmp(arg2, "only") == 0 || (strcmp(arg2, "Only") == 0 || (strcmp(arg2, "ONLY") == 0)
		return (2);
	if (strcmp(arg2, "without") == 0 || (strcmp(arg2, "Without") == 0 || (strcmp(arg2, "WITHOUT") == 0)
		return (3);
	if (strcmp(arg2, "help") == 0 || (strcmp(arg2, "Help") == 0 || (strcmp(arg2, "HELP") == 0) 
		return (4);
}
	
int	main(int argc, char **argv)
{
	int	mode = 0;
	if (argc == 1)
	{
		while (mode == 0)
		{
			mode = help_mode();
		}
		//test(test_tab, details)
	}

	if (argc == 2)
	{
		mode = get_mode(argv[1]);
		//test moche
		printf("%d\n", mode); 
	}

	if (argc == 3)
	{
		int	test_list[]
		mode = get_mode(agrv[1]);
		if (mode == 2)
		{
			
	return (0);
}
