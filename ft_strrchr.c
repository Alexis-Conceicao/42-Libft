/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:09:55 by alconcei          #+#    #+#             */
/*   Updated: 2026/10/22 16:18:11 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*a;

	a = NULL;
	while (*s)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			a = (((char *)s));
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (a);
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