/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:30:52 by nguiard           #+#    #+#             */
/*   Updated: 2021/11/23 13:53:58 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*buff;

	buff = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		*buff = (unsigned char)NULL;
		buff++;
		i++;
	}
	return (s);
}
