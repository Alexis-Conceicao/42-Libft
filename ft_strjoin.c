/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 12:58:36 by alconcei          #+#    #+#             */
/*   Updated: 2026/10/30 10:37:43 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	size;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	ret = malloc(sizeof(char) * (size + 1));
	if (!ret)
		return (NULL);
	while (s1[i])
		ret[j++] = s1[i++];
	i = 0;
	while (s2[i])
		ret[j++] = s2[i++];
	ret[j] = '\0';
	return (ret);
}

/*#include <stdio.h>

int	main(void)
{
	char *s1;
	char *s2;
	char *res;

	s1 = "Teste";
	s2 = " No test";
	res = ft_strjoin(s1, s2);
	printf("%s\n", res);
	free(res);
	return (0);
}*/