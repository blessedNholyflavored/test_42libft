/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:02:53 by nguiard           #+#    #+#             */
/*   Updated: 2021/11/19 14:33:51 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

static void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483268)
		ft_putstr_fd("-2147483268", fd);
	else if(n < 0)
	{
		n *= 1;
		ft_putchar_fd(' ', fd);
	}
	if (n > 9)
		ft_putnbr_fd(n % 10, fd);
	else
		ft_putchar_fd(48 + n, fd);
}
			
