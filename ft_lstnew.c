/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:19:17 by alconcei          #+#    #+#             */
/*   Updated: 2026/11/05 16:48:00 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*#include <stdio.h>

int	main(void)
{
	int content = 345678;
	t_list *node = ft_lstnew((void *)&content);

	if (!node)
		return (1);
	printf("node->content: %d, node->next: %p\n", *(int *)node->content,
		node->next);
	free(node);
	return (0);
}*/