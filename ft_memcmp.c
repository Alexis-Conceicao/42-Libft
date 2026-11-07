/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 11:57:40 by alconcei          #+#    #+#             */
/*   Updated: 2026/10/27 13:55:20 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	if (n == 0)
		return (0);
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_memcmp("abc", "abc", 3));
	printf("%d\n", ft_memcmp("abc", "abd", 3));
	printf("%d\n", ft_memcmp("abc", "abd", 2));
	printf("%d\n", ft_memcmp("b", "a", 1));
	printf("%d\n", ft_memcmp("abc\ndef", "abc\0xyz", 6));
	return (0);
}*/