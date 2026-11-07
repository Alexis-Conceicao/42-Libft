/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 14:24:26 by alconcei          #+#    #+#             */
/*   Updated: 2026/10/30 12:35:15 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	if (!s || !f)
		return (NULL);
	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*#include <stdio.h>

char	testar(unsigned int i, char c)
{
	return (c + i);
}

int	main(void)
{
	char *res = ft_strmapi("aaaaa", &testar);
	char *res2 = ft_strmapi("abcde", &testar);

	printf("Result: %s\n", res);
	printf("Result2: %s\n", res2);
	free(res);
	return (0);
}*/