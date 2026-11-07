/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:01:23 by alconcei          #+#    #+#             */
/*   Updated: 2026/11/05 15:53:46 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	if (!lst || !f)
		return ;
	ptr = lst;
	while (ptr)
	{
		(*f)(ptr->content);
		ptr = ptr->next;
	}
}

/*#include <stdio.h>

void	print_int(void *c)
{
	printf("%d\n", *(int *)c);
}

int	main(void)
{
	int a = 1, b = 2, c = 3;
	t_list *lst = NULL;

	ft_lstadd_back(&lst, ft_lstnew(&a));
	ft_lstadd_back(&lst, ft_lstnew(&b));
	ft_lstadd_back(&lst, ft_lstnew(&c));
	ft_lstiter(lst, print_int);
	free(lst->next->next);
	free(lst->next);
	free(lst);
	return (0);
}*/