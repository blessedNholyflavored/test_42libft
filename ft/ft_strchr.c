#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	*p;

	p = (char *)s;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (p);
		i++;
		p++;
	}
	return (NULL);
}
