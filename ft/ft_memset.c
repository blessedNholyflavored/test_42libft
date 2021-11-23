/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:17:27 by nguiard           #+#    #+#             */
/*   Updated: 2021/11/23 12:11:53 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int				i;
	unsigned char	*buff;

	buff = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		*buff = c;
		buff++;
		i++;
	}
	return (buff);
}
