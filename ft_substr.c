/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 12:02:46 by alconcei          #+#    #+#             */
/*   Updated: 2026/11/05 16:36:29 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start >= size)
		return (ft_strdup(""));
	if (len > size - start)
		len = size - start;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s + start, len);
	ptr[len] = '\0';
	return (ptr);
}

/*#include <stdio.h>

int	main(void)
{
	char *str;
	char *sub;

	str = "Teste, 42 testar";
	sub = ft_substr(str, 0, 9);
	printf("Teste 1: \'%s\'\n", sub);
	free(sub);
	sub = ft_substr(str, 20, 5);
	printf("Teste 2: \'%s\'\n", sub);
	free(sub);
	sub = ft_substr(str, 10, 100);
	printf("Teste 3: \'%s\'\n", sub);
	free(sub);
}*/