#include "../libtest.h"

void	set_test(int mode, int *test, char **fnc_name, char *arg2)
{
	int	i;
	int	a;

	i = 1;
	a = 34;
	if (mode == 2)
	{
		if (strstr(arg2, fnc_name[0]) != NULL)
		{
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
