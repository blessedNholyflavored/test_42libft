/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:19:34 by nathan            #+#    #+#             */
/*   Updated: 2021/11/17 22:29:45 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

char	**ft_split(char const *s, char c)
{
	printf("%d\n", word_count(s, c));
	return (NULL);
}
