/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:19:34 by nathan            #+#    #+#             */
/*   Updated: 2021/11/19 15:23:56 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	word_count(char const *s, char c)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			res += 1;
		i++;
	}
	return (res);
}

static char	*tablloc(char const *s, char c, int *i)
{
	char	*res;
	int	j;

	j = *i;
	while (s[j] == c)
		j++;
	*i = j;
	while (s[j] != '\0' && s[j] != c)
		j++;
	res = (char *)malloc((j - *i + 1) * sizeof(char));
	if (!res)
		return (NULL);
	j = 0;
	while (s[*i] != '\0' && s[*i] != c)
	{
		res[j] = s[*i];
		*i += 1;
		j++;
	}
	res[j] = '\0';
	return (res);
}

static	void	free_all(char **s)
{
	int	i;

	i = 0;
	while (*s[i])
	{
		free(s[i]);
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int	i;
	int	*pi;
	int	mots;
	int	j;

	mots = word_count(s, c);
	i = 0;
	j = 0;
	pi = &i;
	res = malloc((mots + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (j < mots)
	{
		res[j] = tablloc(s, c, pi);
		if (!res[j])
		{
			free_all(res);
			return (NULL);
		}
		j++;
	}
	res[mots + 1] = NULL;
	return (res);
}
