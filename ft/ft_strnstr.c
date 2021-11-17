/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:21:08 by nguiard           #+#    #+#             */
/*   Updated: 2021/11/16 19:21:12 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static char	*search(const char *big, const char *little, size_t len, size_t i)
{
	size_t	n;
	size_t	a;

	a = 0;
	n = i;
	while (little[a])
	{
		if (little[a] != big[i])
			return (0);
		i++;
		a++;
	}
	return ((char *)big + n);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (ft_strlen(little) == 0)
		return ((char *)big);
	i = 0;
	while (big[i])
	{
		if (big[i] == little[0])
			if (search(big, little, len, i) != NULL)
				return (search(big, little, len, i));
		i++;
	}
	return (NULL);
}
