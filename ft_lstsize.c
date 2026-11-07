/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:54:11 by alconcei          #+#    #+#             */
/*   Updated: 2026/11/05 15:54:23 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;
	t_list			*ptr;

	if (!lst)
		return (0);
	count = 0;
	ptr = lst;
	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}

/*#include <stdio.h>

int	main(void)
{
	int a = 1, b = 2, c = 3;
	t_list *lst = NULL;

	ft_lstadd_back(&lst, ft_lstnew(&a));
	ft_lstadd_back(&lst, ft_lstnew(&b));
	ft_lstadd_back(&lst, ft_lstnew(&c));
	printf("size: %u\n", ft_lstsize(lst));
	free(lst->next->next);
	free(lst->next);
	free(lst);
	return (0);
}*/