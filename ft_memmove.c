/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:31:33 by alconcei          #+#    #+#             */
/*   Updated: 2026/10/21 16:05:51 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*i;
	const unsigned char	*j;

	if (!dest && !src)
		return (dest);
	i = (unsigned char *)dest;
	j = (const unsigned char *)src;
	if (i < j)
	{
		while (n--)
			*i++ = *j++;
	}
	else
	{
		while (n--)
			i[n] = j[n];
	}
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	char a[] = "123456789";
	ft_memmove(a + 2, a, 5);
	printf("%s\n", a);
}*/