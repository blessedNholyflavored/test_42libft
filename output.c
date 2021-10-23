#include "test_libft.h"

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
	//
	printf("{%s}\n",arg1);
	r = 0;
	while (r == 0)
	{
		clear_buff(buff);
		printf("Veuillez entrer le second argument souhaité:\n");
		scanf("%s", buff);
		clear_scanf();
		arg2 = strdup(buff);
		clear_buff(buff);
		printf("Si vous etes sur de votre argument \"%s\", entrez \'y\':\n", arg2);
		scanf("%c", buff);
		clear_scanf();
		if (buff[0] == 'y' || buff [0] == 'Y')
			r = 1;
	}
	r = 0;
	printf("{%s}\n",arg2);
	while (r == 0)
	{
		clear_buff(buff);
		printf("Veuillez entrer le troisieme argument souhaité:\n");
		scanf("%s", buff);
		clear_scanf();
		arg3 = strdup(buff);
		clear_buff(buff);
		printf("Si vous etes sur de votre argument \"%s\", entrez \'y\':\n", arg3);
		scanf("%c", buff);
		clear_scanf();
		if (buff[0] == 'y' || buff [0] == 'Y')
			r = 1;
	}
	printf("{%s}\n",arg3);
}
