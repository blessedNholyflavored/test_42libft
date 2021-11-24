/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 09:07:08 by nguiard           #+#    #+#             */
/*   Updated: 2021/11/24 09:42:25 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char	b1;
	unsigned char	b2;

	i = 0;
	while (i < n)
	{
		b1 = *(unsigned char *)s1;
		b2 = *(unsigned char *)s2;
		if (b1 != b2)
			return(b1 - b2);
		s1++;
		s2++;
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("argc != 3\n");
		return (-1);
	}
	printf("argv[1] = '%s'\targv[2] = '%s'\tlen: %ld\n", argv[1], argv[2], strlen(argv[1]));
	printf("memcmp:\t\t%d\nft_memcmp:\t%d\n", memcmp(argv[1], argv[2], strlen(argv[1])), ft_memcmp(argv[1], argv[2], strlen(argv[1])));
	return (0);
}
