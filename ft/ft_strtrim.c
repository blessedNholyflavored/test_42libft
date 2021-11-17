/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:17:07 by nathan            #+#    #+#             */
/*   Updated: 2021/11/17 22:26:11 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static int	is_set(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	not_set(const char *s, const char *set)
{
	int	i;
	int	j;
	int	res;

	res = ft_strlen(s);
	i = 0;
	while (s[i])
	{
		j = 0;
		while (set[j])
		{
			if (s[i] == set[j])
				res -= 1;
			j++;
		}
		i++;
	}
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	char	*res;
	int	a;

	a = not_set(s1, set);
	i = 0;
	j = 0;
	res = (char *)malloc(a * sizeof(char));
	if (!res)
		return (NULL);
	while (j < a)
	{
		if (is_set(set, s1[i]) == 0)
		{
			res[j] = s1[i];
			j++;
		}
		i++;
	}
	res[j] = '\0';
	return (res);
}
