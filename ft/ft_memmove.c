/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:37:35 by nguiard           #+#    #+#             */
/*   Updated: 2021/11/24 09:03:56 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				i;
	unsigned char	buff;

	buff = (unsigned char)dst;
	i = 0;
	while (i < len)
	{
		buff = (unsigned char)src;
		buff++;
		i++;
	}
	return (dst);
}
