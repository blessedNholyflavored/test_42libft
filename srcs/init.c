#include "../libtest.h"

void	set_test(int mode, int *test, char **fnc_name, char *arg2)
{
	int	i;

	i = 1;
	if (mode == 2)
	{
		init_test(test, 0);
		if (strstr(arg2, fnc_name[0]) != NULL)
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
			if (strstr(arg2, fnc_name[i]) != NULL)
				test[i] = 1;
			i++;
		}
	}

	if (mode == 3)
	{
		init_test(test, 1);
		if (strstr(arg2, fnc_name[0]) != NULL)
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
			if (strstr(arg2, fnc_name[i]) != NULL)
				test[i] = 0;
			i++;
		}
	}
}

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
