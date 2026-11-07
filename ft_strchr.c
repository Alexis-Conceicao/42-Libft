/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:07:40 by alconcei          #+#    #+#             */
/*   Updated: 2026/10/22 16:17:51 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return (((char *)s));
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/*#include <stdio.h>
int	main(void)
{
	char *s;

	s = "teste word";
	char *res = ft_strchr(s, 'o');
	if (!res)
		printf("Letter not found.\n");
	else
		printf("%s\n", res);
	res = ft_strchr(s, 's');
	if (!res)
		printf("Letter not found.\n");
	else
		printf("%s\n", res);
	return (0);
}*/