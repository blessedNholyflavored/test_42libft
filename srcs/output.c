#include "../libtest.h"

int	help_mode(void)
{	
	int	m;
	char	c;

	c = 'o';
	m = 0;
	while (m == 0)
	{
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
	
	printf("Le programme vas maintenant faire un test integral, entrez \'q\' pour quitter ou \'o\' pour continuer...\n");

	scanf("%c", &c);
	if	(c == 'q' || c == 'q')
		return (0);
	if	(c == 'o' || c == 'O')
		return (1);
	}
	return (-1);
}

void	test_output(char *str, int err, int layer)
{
	int	i;

	i = 0;
	while (i + 1 < layer)
	{
		printf("     ");
		i++;
	}
	printf("└───➤");
	printf("Test \033[0;36m%s\033[0;37m", str);
	i = (i * 5) + strlen(str);
	while (i < DEPTH)
	{
		printf(" ");
		i++;
	}
	printf("\t");
	print_box(err);
}

void	print_box(int err)
{
	if (err == 0)
	{
		printf("\033[0;32m");
		printf("[✓]");
		printf("\033[0;037m");
		printf("\n");
	}
	if (err == 1)
	{
		printf("\033[0;31m");
		printf("[✗]");
		printf("\033[0;037m");
		printf("\n");
	}
}
