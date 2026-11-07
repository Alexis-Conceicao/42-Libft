/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 16:03:37 by alconcei          #+#    #+#             */
/*   Updated: 2026/11/05 17:28:51 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_isset(s1[i], set))
		i++;
	while (j > i && ft_isset(s1[j - 1], set))
		j--;
	res = malloc(sizeof(char) * (j - i + 1));
	if (!res)
		return (NULL);
	ft_memcpy(res, s1 + i, j - i);
	res[j - i] = '\0';
	return (res);
}

/*#include <stdio.h>

int	main(void)
{
	const char *s1 = "!!!Ta correto!!!";
	const char *set = "!To";
	char *trim;

	trim = ft_strtrim(s1, set);
	if (!trim)
		printf("Allocation failed.\n");
	else
	{
		printf("Original str: %s\n", s1);
		printf("Trimmed str: %s\n", trim);
		free(trim);
	}
	return (0);
}*/