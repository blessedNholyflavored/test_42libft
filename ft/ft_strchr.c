/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:19:26 by nguiard           #+#    #+#             */
/*   Updated: 2021/11/16 19:23:42 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
