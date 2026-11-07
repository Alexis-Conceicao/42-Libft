/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 12:22:33 by alconcei          #+#    #+#             */
/*   Updated: 2026/11/06 13:12:05 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size > (size_t)-1 / nmemb)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	ptr = ft_memset(ptr, 0, size * nmemb);
	return (ptr);
}

/*#include <stdio.h>

int	main(void)
{
	char *ptr1;
	char *ptr2;

	ptr1 = ft_calloc(10, 1);
	ptr2 = calloc(10, 1);
	if (!ptr1)
		printf("ft_calloc: failed, sad\n");
	else
		printf("ft_calloc: %s\n", ptr1);
	if (!ptr2)
		printf("calloc: failed, sad\n");
	else
		printf("calloc: %s\n", ptr2);
	free(ptr1);
	free(ptr2);
}*/