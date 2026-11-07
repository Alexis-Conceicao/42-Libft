/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:44:23 by alconcei          #+#    #+#             */
/*   Updated: 2026/11/05 16:53:30 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		ptr = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
}

/*#include <stdio.h>

int	main(void)
{
	t_list *lst = NULL;
	int *n;
	int i = 0;

	while (i < 3)
	{
		n = malloc(sizeof(int));
		*n = i++;
		ft_lstadd_back(&lst, ft_lstnew(n));
	}
	ft_lstclear(&lst, free);
	printf("lst: %p\n", (void *)lst);
	return (0);
}*/