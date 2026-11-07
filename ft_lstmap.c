/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:18:43 by alconcei          #+#    #+#             */
/*   Updated: 2026/11/05 16:03:42 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*newlist;
	void	*content;

	if (!lst || !f)
		return (NULL);
	ptr = NULL;
	newlist = NULL;
	while (lst)
	{
		content = (*f)(lst->content);
		ptr = ft_lstnew(content);
		if (!ptr)
		{
			(del)(content);
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, ptr);
		lst = lst->next;
	}
	return (newlist);
}

/*#include <stdio.h>

void	*dbl(void *c)
{
	int	*n;

	n = malloc(sizeof(int));
	*n = *(int *)c * 2;
	return (n);
}

int	main(void)
{
	int a = 1, b = 2, c = 3;
	t_list *lst = NULL;
	t_list *new;

	ft_lstadd_back(&lst, ft_lstnew(&a));
	ft_lstadd_back(&lst, ft_lstnew(&b));
	ft_lstadd_back(&lst, ft_lstnew(&c));
	new = ft_lstmap(lst, dbl, free);
	printf("%d %d %d\n", *(int *)new->content, *(int *)new->next->content,
		*(int *)new->next->next->content);
	ft_lstclear(&new, free);
	free(lst->next->next);
	free(lst->next);
	free(lst);
	return (0);
}*/