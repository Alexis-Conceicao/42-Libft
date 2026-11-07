/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 14:48:07 by alconcei          #+#    #+#             */
/*   Updated: 2026/10/21 15:31:00 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*i;
	unsigned char	*j;

	if (!dest && !src)
		return (dest);
	i = (unsigned char *)dest;
	j = (unsigned char *)src;
	while (n > 0)
	{
		*i = *j;
		i++;
		j++;
		n--;
	}
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	char a[] = "teste";
	char b[] = "hallo";

	// test
	printf("sent - a: %s, b: %s\n", a, b);
	ft_memcpy(b, a, 5);
	printf("got - a: %s, b: %s\n", a, b);
	return (0);
}*/