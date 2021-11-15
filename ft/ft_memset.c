#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;
	void	*buff;

	i = 0;
	while (i < n)
	{
		s = c;
		i++;
	}
	return (s);
}
