#include <stddef.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = ft_strlen(src);
	k = ft_strlen(dst);
	if (k >= size)
		return (k + j);
	else
	{
		while (k + i < size - 1 && src[i])
		{
			dst[k + i] = src[i];
			i++;
		}
		dst[k + i] = '\0';
		return (k + j);
	}
}
