#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char	*p;

	p = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			p = (char *)s + i;
		i++;
	}
	return (p);
}
