/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 10:52:59 by alconcei          #+#    #+#             */
/*   Updated: 2026/11/05 16:09:29 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		n--;
		ptr++;
	}
	return (NULL);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char *s;

	s = "teste word";
	// initial test
	char *res = ft_memchr(s, 'o', 1);
	if (!res)
		printf("Letter not found.\n");
	else
		printf("%s\n", res);

	// negative test
	res = ft_memchr(s, 's', -1);
	if (!res)
		printf("ft_memchr: Letter not found.\n");
	else
		printf("ft_memchr: %s\n", res);

	// normal memchr
	char *res_2 = memchr(s, 's', -1);
	if (!res_2)
		printf("memchr: Letter not found.\n");
	else
		printf("memchr: %s\n", res);
	return (0);
}*/