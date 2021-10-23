#include "libtest.h"

void	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		putchar(str[i]);
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
