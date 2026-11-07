/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:23:50 by alconcei          #+#    #+#             */
/*   Updated: 2026/11/05 15:58:44 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
}
/*#include <stdio.h>

int	main(void)
{
	int *n = malloc(sizeof(int));
	t_list *node;

	*n = 42;
	node = ft_lstnew(n);
	ft_lstdelone(node, free);
	return (0);
}*/