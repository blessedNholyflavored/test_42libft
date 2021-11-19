#include "../libtest.h"

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

char	minus_i(unsigned int i, char c)
{
	return (c - i);
}

void	chelou(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = 32;
	else
		*c -= 1;
}

void	duplik_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
