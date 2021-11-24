/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 09:54:50 by nguiard           #+#    #+#             */
/*   Updated: 2021/11/24 10:37:43 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

typedef struct	s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*b;

	b = (t_list *)malloc(sizeof(t_list));
	b->content = content;
	b->next = NULL;
	return (b);
}
/*
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("argc != 2");
		return (-1);
	}
	t_list	*li;
	li = ft_lstnew(argv[1]);
	printf("'%s'\n", li->content);
	return (0);
} */
